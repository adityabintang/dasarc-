#include <iostream>

using namespace std;

int main()
{
        // Deklarasi matriks awal 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Deklarasi matriks transpose 3x3
    int transpose[3][3];

    // Lakukan transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[i][j];
        }
    }

    // Tampilkan matriks transpose
    cout << "Matriks transpose:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
