#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input ukuran array dari pengguna
    cout << "Input n: ";
    cin >> n;

    // Membuat array dengan ukuran n
    int arr[n];

    // Mengisi array dengan input dari pengguna
    for (int i = 0; i < n; i++) {
        cout << "Input ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Menampilkan bilangan genap
    cout << "Hasil Array Genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // Menampilkan bilangan ganjil
    cout << "Hasil Array Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
