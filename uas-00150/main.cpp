#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Pegawai{
    string nip;
    string nama;
    string golongan;
    int lamaKerja;
    string jabatan;
    float gapok;
    float totalGaji;
};

const int MAX_PEGAWAI = 100;
Pegawai pegawai[MAX_PEGAWAI];
int jumlahPegawai = 0;

// Fungsi untuk menentukan gaji pokok berdasarkan golongan
float hitungGapok(const string& golongan){
    if(golongan == "IA") return 2800000;
    if(golongan == "IIA") return 2900000;
    if(golongan == "IIIA") return 3080000;
    if(golongan == "IB") return 3180000;
    if(golongan == "IIC") return 4080000;
    if(golongan == "IV") return 4800000;
    if(golongan == "V") return 4890000;
    return 0;
}

// Fungsi untuk menentukan gaji total
float hitungTotalGaji(Pegawai& p){
    float tunjangan = 0;
    float tunjanganTransport = 0;
    float tunjanganJabatan = 0;

    if(p.lamaKerja > 5){
        tunjangan = 0.3f * p.gapok;
    }

    if((p.golongan == "IV" || p.golongan == "V") && p.lamaKerja > 15){
        tunjanganTransport = 0.7f * p.gapok;
    }

    if(p.jabatan == "manager" || p.jabatan == "kepala bagian"){
        tunjanganJabatan = 1000000;
    }

    return p.gapok + tunjangan + tunjanganTransport + tunjanganJabatan;
}

//Input Pegawai
void tambahPegawai(){
    if(jumlahPegawai >= MAX_PEGAWAI){
        cout<< "Kapasitas data pegawai sudah penuh!\n";
        return;
    }

    Pegawai p;
    cout<< "\n--- Input Data Pegawai ---\n";
    cout<< "NIP: ";
    cin >> p.nip;
    cin.ignore();
    cout<< "Nama: ";
    getline(cin, p.nama);
    cout<< "Golongan (IA, IIA, IIIA, IB, IIC, IV, V): ";
    cin>> p.golongan;
    cout<< "Lama Kerja: ";
    cin>> p.lamaKerja;
    cin.ignore();
    cout<< "Jabatan: ";
    getline(cin, p.jabatan);

    p.gapok = hitungGapok(p.golongan);
    p.totalGaji = hitungTotalGaji(p);

    pegawai[jumlahPegawai++] = p;
    cout<< "Data pegawai berhasil ditambahkan";
}

// Laporan Master Pegawai
void laporanMasterPegawai(){
    cout << "\n--- Laporan Master Pegawai ---\n";
    cout << left << setw(5) << "No" << setw(20) << "Nama Pegawai" << setw(10) << "Golongan"
         << setw(15) << "Masa Kerja" << setw(20) << "Jabatan" << setw(10) << "Gapok" << "\n";
    cout << string(80, '-') << "\n";
    for(int i = 0; i < jumlahPegawai; i++){
        cout << left << setw(5) << (i + 1)
             << setw(20) << pegawai[i].nama
             << setw(10) << pegawai[i].golongan
             << setw(15) << pegawai[i].lamaKerja
             << setw(20) << pegawai[i].jabatan
             << setw(10) << fixed << setprecision(2) << pegawai[i].gapok << "\n";
    }
}

//fungsi penggajian
void tampilanSlipGaji(){
    string nip;
    cout<< "\nMasukkan NIP Pegawai: ";
    cin>> nip;

    for(int i =0; i < jumlahPegawai; i++){
        if(pegawai[i].nip == nip){
            Pegawai& p = pegawai[i];
            float pajak = 0.1f * p.totalGaji;
            float gajiBersih = p.totalGaji - pajak;

            cout << "\nPT. MAJU JAYA MANDIRI\n";
            cout << "Perusahaan Ekspor dan Impor Antar Negara\n";
            cout << "Jl. Sepanjang Jalan Kenangan Kita selalu bergandeng tangan\n\n";
            cout << "SLIP GAJI PEGAWAI\n";
            cout << string(50, '-') << "\n";
            cout << "NIP            : " << p.nip << "\n";
            cout << "Nama Pegawai   : " << p.nama << "\n";
            cout << "Golongan       : " << p.golongan << "\n";
            cout << "Gapok          : " << fixed << setprecision(2) << p.gapok << "\n";
            cout << "Jabatan        : " << p.jabatan << "\n";
            cout << "Masa Kerja     : " << p.lamaKerja << " tahun\n";
            cout << "Tunjangan      : " << (p.totalGaji - p.gapok) << "\n";
            cout << "Gaji Kotor     : " << p.totalGaji << "\n";
            cout << "Gaji Bersih    : " << gajiBersih << " (setelah potongan 10% pajak)\n";
            return;
        }
    }
    cout<< "Pegawai dengan NIP" << nip << "tidak ditemukan. \n";
}

//Laporan Penggajian
void laporanPenggajian(){
    cout << "\n--- Laporan Penggajian ---\n";
    cout << left << setw(10) << "NIP" << setw(20) << "Nama Pegawai" << setw(10) << "Total Gaji" << "\n";
    for(int i = 0; i < jumlahPegawai; i++){
        cout << left << setw(10) << pegawai[i].nip
             << setw(20) << pegawai[i].nama
             << setw(10) << fixed << setprecision(2) << pegawai[i].totalGaji << "\n";
    }
}


void menuUtama(){
    int pilihan;
    do{
        cout << "\n--- Menu Utama ---\n";
        cout << "1. Master Pegawai\n";
        cout << "2. Penggajian\n";
        cout << "3. Laporan Master Pegawai\n";
        cout << "4. Laporan Penggajian\n";
        cout << "5. Keluar program\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;

        switch(pilihan){
            case 1:
                tambahPegawai();
                break;
            case 2:
                tampilanSlipGaji();
                break;
            case 3:
                laporanMasterPegawai();
                break;
            case 4:
                laporanPenggajian();
                break;
            case 5:
                cout << "Terima kasih!\n";
                break;
            default:
                cout<< "Pilihan tidak valid\n";
        }
    }while(pilihan != 5);
}
int main()
{
    menuUtama();
    return 0;
}
