#include <iostream>

using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if(nilai > 60){
        cout << "Selamat, ANDA Lulus" << endl;
    }else if ( nilai <= 60){
        cout << "Mohon maaf, ANDA tidak Lulus" << endl;
    }
}
