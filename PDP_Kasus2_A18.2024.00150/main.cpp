#include <iostream>

using namespace std;

int main()
{
    // Deklarasi array 1D input
    int inputArr[] = {2, 10, 5, 7, 1, 3, 6, 4, 2};

    // Deklarasi array 2D output
    int outputArr[3][3];

    // Isi array 2D output secara dinamis
    int index = 0;
    cout << "Input element array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            outputArr[i][j] = inputArr[index++];
            cout << outputArr[i][j] <<endl;
        }
    }
    cout << endl;

    // Tampilkan hasil output
    cout << "Hasil Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << outputArr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Array baris 0 kolom 1: " << outputArr[0][1] << endl;
    cout << "Array baris 1 kolom 0: " << outputArr[1][0] << endl;
    return 0;
}
