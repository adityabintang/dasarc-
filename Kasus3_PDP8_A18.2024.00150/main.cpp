#include <iostream>
#include <algorithm> // Untuk std::max_element dan std::min_element
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

    // Menampilkan hasil array
    cout << "Hasil Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Menggunakan std::max_element dan std::min_element
    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);

    // Menghitung jumlah dan rata-rata
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Menjumlahkan elemen
    }

    // Menghitung rata-rata
    double average = static_cast<double>(sum) / n;

    // Menampilkan hasil
    cout << "Nilai terbesar: " << maxVal << endl;
    cout << "Nilai terkecil: " << minVal << endl;
    cout << "Jumlah array: " << sum << endl;
    cout << "Rata-rata: " << average << endl;

    return 0;
}
