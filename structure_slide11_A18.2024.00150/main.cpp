#include <iostream>

using namespace std;

struct Sepeda{
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    Sepeda sepeda;

    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = "5.000.000";

    cout << sepeda.merk << " " << sepeda.type << " " << sepeda.tahun << " " << sepeda.harga << endl;
}
