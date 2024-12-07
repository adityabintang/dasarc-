#include <iostream>

using namespace std;

// Pass By Value
int PassByValue(int x) {
    // Fungsi adalah implementasi pass by value
    // x melakukan penjumlahan dengan 5
    return x + 5;
}

// Pass By Reference
int PassByReference(int* x) {
    // Fungsi adalah implementasi pass by reference
    // x melakukan penjumlahan dengan 5
    *x = *x + 5;
    return *x;
}

int main() {
    // Program Utama
    int input;

    // Pass By Value
    cout << "Masukkan nilai: ";
    cin >> input;
    int output = PassByValue(input);
    cout << "Hasil Pass By Value: " << output << endl;

    // Pass By Reference
    cout << "Masukkan nilai: ";
    cin >> input;
    output = PassByReference(&input);
    cout << "Hasil Pass By Reference: " << output << endl;

    return 0;
}
