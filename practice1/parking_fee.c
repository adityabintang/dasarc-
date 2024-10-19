// Fungsi untuk menghitung biaya parkir sepeda motor
int hitungBiayaMotor(int jam) {
    if (jam <= 12) {
        return jam * 3000;
    } else {
        return 50000;
    }
}

// Fungsi untuk menghitung biaya parkir mobil
int hitungBiayaMobil(int jam) {
    if (jam <= 12) {
        return jam * 5000;
    } else {
        return 75000;
    }
}

// Fungsi untuk menghitung biaya parkir truk/bus
int hitungBiayaTrukBus(int jam) {
    if (jam <= 8) {
        return jam * 25000;
    } else {
        return 250000;
    }
}

int main() {
    int jenisKendaraan, jamParkir;

    cout << "Kalkulator Biaya Parkir\n";
    cout << "1. Sepeda Motor/Sepeda Listrik/Tossa/Sepeda\n";
    cout << "2. Mobil\n";
    cout << "3. MiniTruck/Truck/Mini Bus/Bus\n";
    cout << "Pilih jenis kendaraan (1-3): ";
    cin >> jenisKendaraan;

    if (jenisKendaraan < 1 || jenisKendaraan > 3) {
        cout << "Pilihan tidak valid.\n";
        return 1;
    }

    cout << "Masukkan lama parkir (jam): ";
    cin >> jamParkir;

    if (jamParkir < 0) {
        cout << "Lama parkir tidak valid.\n";
        return 1;
    }

    int biayaParkir = 0;

    switch (jenisKendaraan) {
        case 1:
            biayaParkir = hitungBiayaMotor(jamParkir);
            break;
        case 2:
            biayaParkir = hitungBiayaMobil(jamParkir);
            break;
        case 3:
            biayaParkir = hitungBiayaTrukBus(jamParkir);
            break;
    }

    cout << "Biaya parkir: Rp " << biayaParkir << ",-\n";

    return 0;
}
