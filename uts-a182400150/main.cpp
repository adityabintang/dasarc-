#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    int masaKerja;
    int gajiPokok;
    int lembur = 0;
    int gajiDiterima = 0;
    string golongan; // untuk pegawai
};

struct Dosen : Pegawai {
    int sks;         // jumlah SKS yang diajarkan
    string jafa;     // jabatan fungsional (AA, Lektor, Lektor Kepala, GB)
};

void tampilkanMenu() {
    cout << "===================\n";
    cout << "  MENU\n";
    cout << "===================\n";
    cout << "1. Input Pegawai\n";
    cout << "2. Input Dosen\n";
    cout << "3. Gajian\n";
    cout << "4. Laporan\n";
    cout << "5. Exit\n";
    cout << "==================\n";
    cout << "Pilih [1..5]: ";
}

void inputPegawai(vector<Pegawai>& pegawaiList) {
    Pegawai p;
    cout << "Masukkan nama pegawai: ";
    cin.ignore();
    getline(cin, p.nama);
    cout << "Masukkan golongan (A1/A2/A3): ";
    cin >> p.golongan;
    cout << "Masukkan masa kerja (dalam tahun): ";
    cin >> p.masaKerja;
    cout << "Masukkan jam lembur: ";
    cin >> p.lembur;
    p.jabatan = "Pegawai";
    p.gajiPokok = 3000000;
    pegawaiList.push_back(p);
    cout << "Pegawai berhasil ditambahkan!\n";
}

void inputDosen(vector<Dosen>& dosenList) {
    Dosen d;
    cout << "Masukkan nama dosen: ";
    cin.ignore(); // Ignore any leftover newline character from previous inputs
    getline(cin, d.nama);
    cout << "Masukkan jabatan fungsional (AA/Lektor/Lektor Kepala/GB): ";
    getline(cin, d.jafa); // Read the entire line, including spaces
    cout << "Masukkan masa kerja (dalam tahun): ";
    cin >> d.masaKerja;
    cout << "Masukkan jumlah SKS yang diajarkan: ";
    cin >> d.sks;
    d.jabatan = "Dosen";
    d.gajiPokok = 4000000;
    dosenList.push_back(d);
    cout << "Dosen berhasil ditambahkan!\n";
}


int hitungBonusPerumahan(int masaKerja) {
    return masaKerja > 10 ? 3000000 : 0;
}

int hitungKelebihanSKS(int sks, string jafa) {
    if (sks <= 12) return 0;
    int kelebihanSKS = sks - 12;
    int tarif = 0;
    if (jafa == "AA") tarif = 40000;
    else if (jafa == "Lektor") tarif = 55000;
    else if (jafa == "Lektor Kepala") tarif = 75000;
    else if (jafa == "GB") tarif = 150000;
    return kelebihanSKS * tarif;
}

int hitungLembur(int lembur, string golongan, int masaKerja) {
    if (masaKerja < 1 || lembur <= 0) return 0;
    int tarif = 0;
    if (golongan == "A1") tarif = 10000;
    else if (golongan == "A2") tarif = 15000;
    else if (golongan == "A3") tarif = 20000;
    return lembur * tarif;
}

void prosesGajian(vector<Pegawai>& pegawaiList, vector<Dosen>& dosenList) {
    string pilihan;
    cout << "Gajian untuk siapa (Pegawai/Dosen)? ";
    cin >> pilihan;

    if (pilihan == "Pegawai") {
        for (auto& p : pegawaiList) {
            int bonus = hitungBonusPerumahan(p.masaKerja);
            int lembur = hitungLembur(p.lembur, p.golongan, p.masaKerja);
            p.gajiDiterima = p.gajiPokok + bonus + lembur;
        }
    } else if (pilihan == "Dosen") {
        for (auto& d : dosenList) {
            int bonus = hitungBonusPerumahan(d.masaKerja);
            int kelebihanSKS = hitungKelebihanSKS(d.sks, d.jafa);
            d.gajiDiterima = d.gajiPokok + bonus + kelebihanSKS;
        }
    } else {
        cout << "Pilihan tidak valid.\n";
    }
}

void tampilkanLaporan(const vector<Pegawai>& pegawaiList, const vector<Dosen>& dosenList) {
    cout << "=====================================================================================\n";
    cout << "NO | PEGAWAI/DOSEN      | JABATAN        | GAPOK      | JAM LEBIH/SKS | LEMBUR   | GAJI DITERIMA\n";
    cout << "=====================================================================================\n";

    int totalGaji = 0;
    int no = 1;

    for (const auto& p : pegawaiList) {
        cout << setw(3) << no++ << " | " << setw(16) << p.nama << " | "
             << setw(14) << p.jabatan + "/" + p.golongan << " | "
             << setw(10) << p.gajiPokok << " | "
             << setw(12) << p.lembur << " | "
             << setw(8) << hitungLembur(p.lembur, p.golongan, p.masaKerja) << " | "
             << setw(12) << p.gajiDiterima << "\n";
        totalGaji += p.gajiDiterima;
    }

    for (const auto& d : dosenList) {
        cout << setw(3) << no++ << " | " << setw(16) << d.nama << " | "
             << setw(14) << d.jabatan + "/" + d.jafa << " | "
             << setw(10) << d.gajiPokok << " | "
             << setw(12) << d.sks << " | "
             << setw(8) << hitungKelebihanSKS(d.sks, d.jafa) << " | "
             << setw(12) << d.gajiDiterima << "\n";
        totalGaji += d.gajiDiterima;
    }

    cout << "=====================================================================================\n";
    cout << "TOTAL                                                                       " << totalGaji << "\n";
}

int main() {
    vector<Pegawai> pegawaiList;
    vector<Dosen> dosenList;
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                inputPegawai(pegawaiList);
                break;
            case 2:
                inputDosen(dosenList);
                break;
            case 3:
                prosesGajian(pegawaiList, dosenList);
                cout << "Gaji berhasil diproses!\n";
                break;
            case 4:
                tampilkanLaporan(pegawaiList, dosenList);
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    } while (pilihan != 5);

    return 0;
}
