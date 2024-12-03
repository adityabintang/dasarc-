#include <iostream>

using namespace std;

int main()
{
    int jmlh_pddk = 0;

    cout << "Masukkan Jumlah Penduduk : ";
    cin>> jmlh_pddk;

    // Membuat array untuk menyimpan data penduduk
    string nama[jmlh_pddk];
    char jenis_kelamin[jmlh_pddk]; // 'L' atau 'P'
    string status[jmlh_pddk];       // "Menikah" atau "Belum"
    string alamat[jmlh_pddk];
    string kota[jmlh_pddk];

    for (int i = 0; i < jmlh_pddk; i++){
        cout<< "Masukkan Nama Penduduk ke-" << i + 1<<": ";
        cin >> nama[i];

        cout << "Masukkan Jenis Kelamin (L/P): ";
        cin >> jenis_kelamin[i];

        cout << "Masukkan Status (Kawin/Belum Kawin): ";
        cin >> status[i];

        // Mengabaikan newline yang tersisa di buffer
        cin.ignore();

        cout << "Masukkan Alamat: ";
        getline(cin, alamat[i]);

        cout << "Masukkan Kota: ";
        getline(cin, kota[i]);

        cout << endl; // Memberi jarak antar input penduduk

    }

    cout<< "Tampilkan data "<< endl;
    cout<< "=========================================================="<<endl;
    cout<< "NO Nama Penduduk  L/P  Status   Alamat    Kota"<<endl;
    cout<< "=========================================================="<<endl;
    for (int i = 0; i < jmlh_pddk; i++) {
        cout << i + 1 << "   "
             << nama[i] << "   "
             << jenis_kelamin[i] << "    "
             << status[i] << "   "
             << alamat[i] << "   "
             << kota[i] << endl;

    }
}
