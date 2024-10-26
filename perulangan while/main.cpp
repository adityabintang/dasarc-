#include <iostream>
#include <cmath> // untuk fungsi pow() dan M_PI

using namespace std;

int main()
{
    int pilihan;
    double panjang, lebar, tinggi, jari_jari, alas, luas, sisi;


    do{
        cout << "==========================" << endl;
        cout << "Hitung Luas Bangun" << endl;
        cout << "==========================" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Luas Segitiga" << endl;
        cout << "4. Luas Persegi" << endl;
        cout << "5. Keluar Program" << endl;
        cout << "==========================" << endl;
        cout << "Pilihan Menu [1..5] : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "==========================" << endl;
            cout << "Luas Persegi Panjang" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Panjang: ";
            cin >> panjang;
            cout << "Masukkan Lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas = " << luas << endl;
            break;
        case 2:
            cout << "==========================" << endl;
            cout << "Luas Lingkaran" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Jari - jari: ";
            cin >> jari_jari;
            luas = M_PI * pow(jari_jari, 2); // M_PI adalah konstanta untuk nilai pi
            cout << "Luas = " << luas << endl;
            break;
        case 3:
            cout << "==========================" << endl;
            cout << "Luas Segitiga" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Alas: ";
            cin >> alas;
            cout << "Masukkan Tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas = " << luas << endl;
            break;
        case 4:
            cout << "==========================" << endl;
            cout << "Luas Persegi" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas = " << luas << endl;
            break;
        case 5:
            cout << "Terima kasih! Keluar dari program." << endl;
            break;

        default:
            cout << "Pilihan tidak valid, silakan pilih kembali." << endl;
        }

        cout << endl; // Memberikan jarak antar hasil perhitungan
    } while  (pilihan != 5);

    return 0;
}
