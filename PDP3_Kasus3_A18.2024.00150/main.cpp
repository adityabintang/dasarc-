#include <iostream>

using namespace std;

int main()
{
     // Program 1: Postfix increment/decrement
    cout << "Program 1: Postfix increment/decrement\n";
    int x = 5, y = 3;

    cout << "Nilai awal: x = " << x << ", y = " << y << endl;

    // 1. x++
    cout << "1. x++ : " << x++ << endl;
    cout << "   Setelah x++, x = " << x << endl;

    // 2. y++
    cout << "2. y++ : " << y++ << endl;
    cout << "   Setelah y++, y = " << y << endl;

    // 3. x--
    cout << "3. x-- : " << x-- << endl;
    cout << "   Setelah x--, x = " << x << endl;

    // 4. y--
    cout << "4. y-- : " << y-- << endl;
    cout << "   Setelah y--, y = " << y << endl;

    cout << "\nNilai akhir: x = " << x << ", y = " << y << endl;

    // Program 2: Prefix increment/decrement
    cout << "\nProgram 2: Prefix increment/decrement\n";
    x = 5; y = 3; // Reset nilai x dan y

    cout << "Nilai awal: x = " << x << ", y = " << y << endl;

    // 1. ++x
    cout << "1. ++x : " << ++x << endl;

    // 2. ++y
    cout << "2. ++y : " << ++y << endl;

    // 3. --x
    cout << "3. --x : " << --x << endl;

    // 4. --y
    cout << "4. --y : " << --y << endl;

    cout << "Nilai akhir: x = " << x << ", y = " << y << endl;
}
