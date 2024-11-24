#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct Anggota{
    string nama;
    int simpanPokok = 500000;
    int simpanWajib = 25000;
    int simpan = 0;
    int pinjam = 0;
    int saldo = simpanPokok + simpanWajib;
};

void tampilanMenu(){
    cout << "====================\n";
    cout << " MENU KOPERASI\n";
    cout << "1. ANGGOTA KOPERASI\n";
    cout << "2. SIMPAN\n";
    cout << "3. PINJAM\n";
    cout << "4. LAPORAN\n";
    cout << "5. EXIT\n";
    cout << "====================\n";
    cout << "PILIH [1..5] : ";
}

void tambahAnggota(vector<Anggota> &anggotaList){
    if(anggotaList.size() >= 5){
        cout << "Anggota sudah mencapai batas minimal ( 5 anggota ). \n";
        return;
    }
    Anggota anggota;
    cout << "Masukkan nama anggota: ";
    cin.ignore();
    getline(cin, anggota.nama);
    anggotaList.push_back(anggota);
    cout << "Anggota berhasil ditambahkan!\n";
}

void simpanUang(vector<Anggota> &anggotaList){
    int id, jumlah;
    cout << "Masukkan nomor anggota ( 1 - " << anggotaList.size() << "): ";
    cin >> id;
    if(id < 1 || id > anggotaList.size()){
        cout << "Anggota tidak ditemukan.\n";
        return;
    }
    cout << "Masukan jumlahg simpan: ";
    cin >> jumlah;
    anggotaList[id - 1].simpan += jumlah;
    anggotaList[id - 1].saldo += jumlah;
    cout << "Simpanan berhasil ditambahkan!\n";
}

void pinjamUang(vector<Anggota> &anggotaList){
    int id, jumlah;
    cout << "Masukkan nomor anggota ( 1 - " << anggotaList.size() << "): ";
    cin >> id;
    if(id < 1 || id > anggotaList.size()){
        cout << "Anggota tidak ditemukan.\n";
        return;
    }
    cout << "Masukan jumlahg simpan: ";
    cin >> jumlah;
    if(jumlah > anggotaList[id - 1].saldo){
        cout << "Saldo tidak cukup.\n";
        return;
    }
    anggotaList[id - 1].pinjam += jumlah;
    anggotaList[id - 1].saldo -= jumlah;
    cout << "Pinjaman berhasil diproses!\n";
}

void laporan(vector<Anggota> &anggotaList){
    cout << "KOPERASI \"SELALU JAYA\" \n";
    cout << "LAPORAN DAFTAR ANGGOTA\n";
    cout << "==========================================================================================================\n";
    cout << "NO | NAMA ANGGOTA               | JML.POKOK   | JML.WAJIB | SIMPAN | JML.PINJAM | SALDO\n" ;
    cout << "==========================================================================================================\n";

    int totalPokok = 0, totalWajib = 0, totalSimpan = 0, totalPinjam = 0, totalSaldo = 0;
    for( size_t i = 0; i < anggotaList.size(); ++i){
        const Anggota &a = anggotaList[i];
        totalPokok += a.simpanPokok;
        totalWajib += a.simpanWajib;
        totalSimpan += a.simpan;
        totalPinjam += a.pinjam;
        cout << setw(4) << ( i + 1 ) << " | " << setw(20) << left << a.nama
             << " | " << setw(9) <<  a.simpanPokok
             << " | " << setw(8) <<  a.simpanWajib
             << " | " << setw(6) <<  a.simpan
             << " | " << setw(9) <<  a.pinjam
             << " | " << setw(6) <<  a.saldo << '\n';
    }

    cout << "===========================================================================================================\n";
    cout << "TOTAL         " << setw(14) << totalPokok
         << setw(12) << totalWajib
         << setw(10) << totalWajib
         << setw(11) << totalWajib
         << setw(9) << totalSaldo << '\n';
}


int main()
{
    vector<Anggota> anggotaList;
    int pilihan;

    do{
        tampilanMenu();
        cin >> pilihan;
        switch(pilihan){
            case 1:
                tambahAnggota(anggotaList);
                break;
            case 2:
                if(anggotaList.empty()){
                    cout << "Belum ada anggota yang terdaftar.\n";
                }else{
                    simpanUang(anggotaList);
                }
                break;
            case 3:
                if(anggotaList.empty()){
                    cout << "Belum ada anggota yang terdaftar.\n";
                }else{
                    pinjamUang(anggotaList);
                }
                break;
            case 4:
                if(anggotaList.empty()){
                    cout << "Belum ada anggota yang terdaftar.\n";
                }else{
                    laporan(anggotaList);
                }
                break;
            case 5:
                cout << " Keluar dari program. \n";
            default:
                cout << "Menu tidak ditemukan!\n";
        }
    }while(pilihan != 5);
    return 0;
}
