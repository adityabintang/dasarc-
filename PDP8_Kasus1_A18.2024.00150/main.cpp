#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input ukuran array dari pengguna
    cout << "Input n: ";
    cin >> n;

    // Membuat array dengan ukuran n
    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Input ke-"<< (i + 1)<< ": ";
        cin>> arr[i];
    }

    // Menampilkan hasil array
    cout << "Hasil Array:  ";
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}
