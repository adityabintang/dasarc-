#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Mendeklarasikan variabel integer untuk menyimpan bilangan dari pengguna
    int number, integerPart,lastDigit;
    float numberDouble, fractionalPart;

    // Meminta input dari pengguna
    cout << "Masukkan sebuah bilangan integer: ";
    cin >> number;

    // Mendapatkan digit terakhir menggunakan operasi modulus
    lastDigit = number % 10;

    // Menampilkan hasil
    cout << "1. Digit terakhir dari bilangan " << number << " adalah: " << lastDigit << endl;

    cout << "Masukkan bilangan float: ";
    cin >> numberDouble;

    //untuk mengambil bagian integer dari bilangan tersebut.
    integerPart = static_cast<int>(numberDouble);
    fractionalPart = numberDouble - integerPart;

    // Menggunakan round untuk menghindari masalah presisi floating-point
    fractionalPart = round(fractionalPart * 100) / 100;

    cout << "2. Bilangan integer: " << integerPart << "Bilangan pecahan: " <<  fractionalPart << endl;
}
