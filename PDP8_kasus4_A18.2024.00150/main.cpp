#include <iostream>

using namespace std;

int main()
{
    int a, b, increment;

    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;

    cout << "Input increment value: ";
    cin >> increment;

    for (int i = a; i <= b; i += increment) {
        cout << i << " ";
    }
    cout << endl;
}
