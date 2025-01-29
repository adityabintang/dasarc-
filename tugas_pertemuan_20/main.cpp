#include <iostream>
#include <cmath> // untuk fungsi pow() dan M_PI
using namespace std;


double persegiPanjang(double panjang, double lebar){
    cout << "==========================" << endl;
    cout << "Luas Persegi Panjang" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan Panjang: ";
    cin >> panjang;
    cout << "Masukkan Lebar: ";
    cin >> lebar;
    double luas = panjang * lebar;
    return luas;
}

double lingkaran(double jari_jari){
     cout << "==========================" << endl;
     cout << "Luas Lingkaran" << endl;
     cout << "==========================" << endl;
     cout << "Masukkan Jari - jari: ";
     cin >> jari_jari;
     double luas = M_PI * pow(jari_jari, 2); // M_PI adalah konstanta untuk nilai pi
     return luas;
}

double segitiga(double alas, double tinggi){
     cout << "==========================" << endl;
     cout << "Luas Segitiga" << endl;
     cout << "==========================" << endl;
     cout << "Masukkan Alas: ";
     cin >> alas;
     cout << "Masukkan Tinggi: ";
     cin >> tinggi;
     double luas = 0.5 * alas * tinggi;
     return luas;
}

double persegi(double sisi){
    cout << "==========================" << endl;
    cout << "Luas Persegi" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan Sisi: ";
    cin >> sisi;
    double luas = sisi * sisi;
    return luas;
}

int jumlah(int a, int b){
    int c = a + b;
    return c;
}

double bagi(int a, int b){
    double c = (double)a / b;
    return c;
}

int kali(int a, int b){
    int c = a * b;
    return c;
}

int kurang(int a, int b){
    int c = a - b;
    return c;
}

int main()
{
     int pilihan;
     double panjang, lebar, tinggi, jari_jari, alas, luas, sisi;

     double div;
     int jml, multi, kurangi;

     jml = jumlah(5,3);
     div = bagi(5, 3);
     multi = kali(5, 3);
     kurangi = kurang(5,3);

     cout << "Hasil jumlah :" << jml << endl;
     cout << "Hasil bagi :" << div << endl;
     cout << "Hasil kali :" << multi << endl;
     cout << "Hasil kurang :" << kurangi << endl;

     cout<<endl;

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
            luas = persegiPanjang(panjang, lebar);
            cout << "Luas Persegi Panjang = " << luas << endl;
            break;
        case 2:
            luas = lingkaran(jari_jari);
            cout << "Luas Lingkaran = " << luas << endl;
            break;
        case 3:
            luas = segitiga(alas, tinggi);
            cout << "Luas Segitiga = " << luas << endl;
            break;
        case 4:
            luas = persegi(sisi);
            cout << "Luas Persegi = " << luas << endl;
            break;
        case 5:
            cout << "Terima kasih! Keluar dari program." << endl;
            break;

        default:
            cout << "Pilihan tidak valid, silakan pilih kembali." << endl;
        }

        cout << endl; // Memberikan jarak antar hasil perhitungan
    } while  (pilihan != 5);
}
