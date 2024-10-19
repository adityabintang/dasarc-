#include <iostream>

using namespace std;

int main()
{
    double jamKerja, JamLembur, upah, upahReguler, overpay, totalUpah;

    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;
    cout << "Masukkan jumlah jam lembur: ";
    cin >> JamLembur;
    cout << "Masukkan jumlah upah per-jam: ";
    cin >> upah;

    upahReguler = upah / jamKerja;

    if( JamLembur > 30){
        overpay = ((upah * 0.40) + upah) * JamLembur;
    }else{
        overpay = ((upah * 0.20) + upah) * JamLembur;
    }

    totalUpah = upahReguler + overpay;

    cout << "Upah Reguler: "<< upahReguler << endl;
    cout << "Tambahan overpay(lembur): "<< overpay << endl;
    cout << "Total Upah: "<< totalUpah << endl;
}
