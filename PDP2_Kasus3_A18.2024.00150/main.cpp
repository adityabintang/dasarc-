#include <iostream>
#include <cmath> //import cmath untuk menggunakan fungsi/methode pow()

using namespace std;

int main()
{
   double celsius, fahrenheit, kelvin, reamur;

    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32;
    kelvin = celsius + 273;
    reamur = (4.0 / 5.0) * celsius;

    cout << "Suhu dalam Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Suhu dalam Kelvin: " << kelvin << " K" << endl;
    cout << "Suhu dalam Reamur: " << reamur << " R" << endl;
}
