#include <iostream>

using namespace std;

int main()
{
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1 ;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    if( bilangan1 > bilangan2){
        cout << "Bilangan terbesar adalah "<< bilangan1 << endl;
    }else{
        cout << "Bilangan terbesar adalah "<< bilangan2 << endl;
    }
}
