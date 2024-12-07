#include <iostream>

using namespace std;

struct hitung{
    int x, y, jml;
};

int main()
{
   hitung jumlah;

   jumlah.x = 10;
   jumlah.y = 20;
   jumlah.jml = jumlah.x + jumlah.y;

   cout << "hasil " << jumlah.x << " + " << jumlah.y << " adalah " << jumlah.jml << endl;
}
