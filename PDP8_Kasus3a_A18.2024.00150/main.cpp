#include <iostream>

using namespace std;

int main()
{
    int a, N;

    // Meminta input dari user
    cout << "Input a: ";
    cin >> a;

    cout << "Input N: ";
    cin >> N;



    // Menampilkan deret bilangan dari a hingga N
    for (int i = a; N >= i; N--) {
        cout << N << " ";
    }

    return 0;
}
