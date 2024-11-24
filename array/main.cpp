#include <iostream>
#include <string>
using namespace std;

int main() {
    string hari[7] = {"Senin", "Selasa",  "Rabu",  "Kamis",  "Jumat", "Sabtu", "Minggu"};

    cout << "Nama-nama hari dalam seminggu: ";
    for (int i = 0; i < 7; i++) {
        cout << hari[i] << "\t";
    }
}
