#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


struct Item {
    int no;
    string namaBarang;
    string satuan;
    int jumlah;
    int harga;
    int total() const {
        return jumlah * harga;
    }
};

void judul()
{
    cout<<"             TOKO ABC"<< endl;
    cout<<"Jl. Pelan-pelan Serba ada disini Semua"<< endl;
    cout<<"             Semarang"<< endl;
    cout<<endl;
    cout << "====================================================" << endl;
    cout << "No  Nama Barang   satuan  jumlah   Harga   total" << endl;
    cout << "====================================================" << endl;
}

void footer(int total)
{
    cout << "====================================================" << endl;
    cout << "            Total    :         " << total << endl;
    cout<<endl;
    cout<<"     TERIM KASIH ATAS KUNJUNGAN ANDA"<< endl;
    cout<<" BARANG YANG SUDAH DIBELI TIDAK DAPAT DI TUKAR"<< endl;
    cout<<"         ATAU DIKEMBALIKAN !"<< endl;
}

void printItem(const Item& item) {
    cout << setw(1) << item.no << ".  "
         << setw(15) << left << item.namaBarang
         << setw(10) << left << item.satuan
         << setw(7) << left << item.jumlah
         << setw(7) << left << item.harga
         << setw(7) << left << item.total() << endl;
}




int main()
{
    judul();
    vector<Item> items = {
        {1, "Sabun", "pcs", 5, 3400},
        {2, "Samhoo", "pcs", 3, 3000},
        {3, "Sisir", "pcs", 2, 1500},
        {4, "Handbody", "pcs", 2, 2000},
        {5, "Sikat", "pcs", 3, 2400}
    };

    for (const auto& item : items) {
        printItem(item);
    }

    // Calculate total
    int total = 0;
    for (const auto& item : items) {
        total += item.total();
    }

    // Calculate total
    total = (5 * 3400) + (3 * 3000) + (2 * 1500) + (2 * 2000) + (3 * 2400);
    footer(total);
}
