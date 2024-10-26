#include <iostream>

using namespace std;

int main()
{
    bool ya = true;
   int pilihan;
   int qty;
   double totalHarga;


   while(ya){
        cout << "MENU MAKANAN" << endl;
        cout << "------------" << endl;
        cout << "1. NASI GORENG /15000" << endl;
        cout << "2. NASI RAMES  /12000" << endl;
        cout << "3. NASI RAWON  /17000" << endl;
        cout << "----------------------" << endl;
        cout << "Pilihan Menu [1..3] : ";
        cin >> pilihan;

        if(pilihan > 3 || pilihan < 0){
            cout << "Terima kasih, selamat datang kembali!" << endl;
            break;
        }

        switch(pilihan){

        case 1:
            cout << "==========================" << endl;
            cout << "ANDA MEMILIH NASI GORENG" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Qty: ";
            cin >> qty;
            totalHarga = qty * 15000;
            cout << "Total Harga = " << totalHarga << endl;
            break;

        case 2:
            cout << "==========================" << endl;
            cout << "ANDA MEMILIH NASI RAMES" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Qty: ";
            cin >> qty;
            totalHarga = qty * 12000;
            cout << "Total Harga = " << totalHarga << endl;
            break;

        case 3:
            cout << "==========================" << endl;
            cout << "ANDA MEMILIH NASI RAWON" << endl;
            cout << "==========================" << endl;
            cout << "Masukkan Qty: ";
            cin >> qty;
            totalHarga = qty * 17000;
            cout << "Total Harga = " << totalHarga << endl;
            break;

        default:
            cout << "Pilihan tidak valid, silakan pilih kembali." << endl;
        }

        cout << endl; // Memberikan jarak antar hasil perhitungan
   }

   return 0;
}
