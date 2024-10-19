#include <iostream>
#include <iomanip> // untuk setPrecision()


using namespace std;


int hitungPromoKertas(int jumlah, double &total, string &bonus){
    double harga = 55000;
    double diskon = 0;

    if(jumlah >= 3 && jumlah <= 5) diskon = 0.05;
    else if (jumlah >= 6 && jumlah <=10) diskon = 0.10;
    else if (jumlah >= 11 && jumlah <= 15) diskon = 0.15;
    else if ( jumlah > 15){
        diskon = 0.20;
        bonus = "FREE BOBA MILK TEA";
    }

    total = jumlah * harga * ( 1 - diskon );
}

int hitungPromoTinta(int jumlah, double &total, string &bonus){
    double harga = 125000;
    double diskon = 0;
    int potongan = 0;

    if (jumlah >= 3 && jumlah <=10){
        diskon = 0.10;
        bonus = "FREE 1 TINTA warna hitam";
    }else if (jumlah > 10 ){
       diskon = 0.20;
       potongan = 2000 * jumlah;
       bonus = "FREE 1 PACK";
    };

    total = (jumlah * harga * ( 1 - diskon )) - potongan;
}

int hitungPromoFlashDisk(int jumlah, double &total, string &bonus){
    double harga = 180000;
    total = jumlah * harga;

    if (total > 5000000){
        total -= 750000;
        bonus = "FREE 1 reguler bag dan 1 gantungan kunci";
    }
    else if (total > 1800000 ){
        total -= 250000;
        bonus = "FREE 1 mini bag ";
    };
}


int main()
{
    int pilihan, jumlah;
    double total;
    string bonus;

    cout << "Promo Toko BABA SLAMET\n";
    cout << "1. Kertas A4 80 gram merk PAPER ( Rp 50.000)\n";
    cout << "2. Tinta warna printer EPSON merk INKQ (Rp. 125.000)\n";
    cout << "3. Flashdisk SUNDRIVE 64 64GB (Rp. 180.000)\n";
    cout << "Pilih produk( 1 - 3 ): ";
    cin >> pilihan;

    cout << "Masukkan jumlah yang dibeli: ";
    cin >> jumlah;


    switch ( pilihan){
    case 1:
        hitungPromoKertas(jumlah, total, bonus);
        break;
    case 2:
        hitungPromoTinta(jumlah, total, bonus);
        break;
    case 3:
        hitungPromoFlashDisk(jumlah, total, bonus);
        break;
    default:
        cout << "Pilihan tidak valid\n";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Total Harga: Rp. " << total << endl;
    if(!bonus.empty()){
        cout << "Bonus: "<< bonus << endl;
    }

    return 0;
}
