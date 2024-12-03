#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input ukuran array dari pengguna
    cout << "Input n: ";
    cin >> n;

    // Membuat array dengan ukuran n
    int arr[n];

    // Menampilkan bilangan genap
    cout << "Hasil Array: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << "0" << " ";
        }else{
            cout << "1" << " ";
        }
    }
    cout << endl;

    return 0;
}
