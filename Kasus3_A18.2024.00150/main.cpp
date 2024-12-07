#include <iostream>

using namespace std;


struct nilai {
    int x;
    int y;
};

void tampilXY(nilai n) {
    cout << "Nilai x = " << n.x << endl;
    cout << "Nilai y = " << n.y << endl;
}

int main() {
    nilai n1;
    n1.x = 5;
    n1.y = 10;
    tampilXY(n1);
    return 0;
}
