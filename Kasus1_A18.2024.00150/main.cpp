#include <iostream>

using namespace std;

struct nilai{
    int x;
    int y;
};
int main(){
    //buat deklarasi variabel n1 bertipe nilai
    //isikan nilai pada variabel x dan y dengan cara
    //akses member n1 ke x dan y. //contoh: n1.x = 5, n1.y=10
    //tampilkan nilai tersebut

    nilai n1;

    n1.x = 5;
    n1.y = 10;

    cout << "Nilai x = " << n1.x << endl;
    cout << "Nilai y = " << n1.y << endl;
}
