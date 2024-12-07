#include <iostream>

using namespace std;

struct mahasiswa {
    string nama;
    int umur;
    float IPK;
    int tahun_lulus;
};

void tampil_mahasiswa(mahasiswa m) {
    cout << "Nama: " << m.nama << endl;
    cout << "Umur: " << m.umur << " tahun" << endl;
    cout << "IPK: " << m.IPK << endl;
    cout << "Tahun Lulus: " << m.tahun_lulus << endl;
}

int main() {
    mahasiswa mhs;
    mhs.nama = "John Doe";
    mhs.umur = 21;
    mhs.IPK = 3.75;
    mhs.tahun_lulus = 2022;

    tampil_mahasiswa(mhs);

    return 0;
}
