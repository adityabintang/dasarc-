#include <iostream>

using namespace std;

int main()
{
        // Deklarasi array 2D berukuran 2x3
    int arr[2][3] = {
        {2, 10, 5},
        {7, 1, 3}
    };

    // Tampilkan output
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
