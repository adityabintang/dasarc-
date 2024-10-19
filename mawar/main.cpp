#include <iostream>
#include <string>

using namespace std;

int main() {
    string jenis_kendaraan;
    int lama_parkir;
    int biaya_parkir = 0;

    // Input jenis kendaraan dan lama parkir
    cout << "Masukkan jenis kendaraan (motor/sepeda/tossa/mobil/truck): ";
    cin >> jenis_kendaraan;
    cout << "Masukkan lama parkir (jam): ";
    cin >> lama_parkir;

    // Menghitung biaya parkir berdasarkan jenis kendaraan
    if (jenis_kendaraan == "motor" || jenis_kendaraan == "sepeda" || jenis_kendaraan == "tossa") {
        if (lama_parkir > 12) {
            biaya_parkir = 50000; // biaya menginap
        } else {
            biaya_parkir = lama_parkir * 3000;
        }
    } else if (jenis_kendaraan == "mobil") {
        if (lama_parkir > 12) {
            biaya_parkir = 75000; // biaya menginap
        } else {
            biaya_parkir = lama_parkir * 5000;
        }
    } else if (jenis_kendaraan == "truck" || jenis_kendaraan == "minitruck" || jenis_kendaraan == "bus") {
        if (lama_parkir > 8) {
            biaya_parkir = 250000; // biaya menginap
        } else {
            biaya_parkir = lama_parkir * 25000;
        }
    } else {
        cout << "Jenis kendaraan tidak valid." << endl;
        return 1;
    }

    // Output biaya parkir
    cout << "Biaya parkir adalah Rp. " << biaya_parkir << endl;

    return 0;
}
