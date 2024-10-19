#include <iostream>

using namespace std;

int hitungBiayaMotor(int jam){
    if(jam <= 12){
        return jam * 3000;
    }else{
        return 50000;
    }
}

int hitungBiayaMobil(int jam){
     if(jam <= 12){
        return jam * 5000;
    }else{
        return 75000;
    }
}
int hitungBiayaTruck(int jam){
     if(jam <= 8){
        return jam * 25000;
    }else{
        return 250000;
    }
}
int main()
{
    int jenisKendaraan, jamParkir, biayaParkir;

    cout << "Biaya Parkir\n";
    cout << "1. Sepeda Motor/Sepeda Listrik/Tossa/Sepeda\n";
    cout << "2. Mobil\n";
    cout << "3. MiniTruck/Truck/Mini Bus/Bus\n";
    cout << "Pilih Jenis Kendaraan( 1 - 3 ): ";
    cin >> jenisKendaraan;

    if ( jenisKendaraan < 1 || jenisKendaraan > 3){
        cout << "Kendaraan tidak valid\n";
        return 1;
    }

    cout << "Masukkan lama parkir ( Jam ): ";
    cin >> jamParkir;

    if(jamParkir < 0){
        cout << "Lama Parkir tidak valid\n";
        return 1;
    }

    switch(jenisKendaraan){
    case 1:
        biayaParkir = hitungBiayaMotor(jamParkir);
        break;
    case 2:
        biayaParkir = hitungBiayaMobil(jamParkir);
        break;
    case 3:
        biayaParkir = hitungBiayaTruck(jamParkir);
        break;
    }


    cout << "Biaya Parkir: Rp " << biayaParkir << endl;

    return 0;

}



