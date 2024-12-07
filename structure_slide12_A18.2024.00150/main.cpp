#include <iostream>
#include <cmath>

struct BangunRuang {
    double panjang;
    double lebar;
    double tinggi;

    double hitungLuasPersegi() {
        return panjang * lebar;
    }

    double hitungLuasLingkaran() {
        return 22.0/7 * lebar * lebar;
    }

    double hitungVolumeKerucut() {
        return 1.0/3 * M_PI * lebar * lebar * tinggi;
    }

    double hitungVolumeBola() {
        return 4.0/3 * M_PI * lebar * lebar * lebar;
    }
};

int main() {
    BangunRuang br;
    br.panjang = 10;
    br.lebar = 5;
    br.tinggi = 7;

    std::cout << "Luas persegi panjang: " << br.hitungLuasPersegi() << std::endl;
    std::cout << "Luas lingkaran: " << br.hitungLuasLingkaran() << std::endl;
    std::cout << "Volume kerucut: " << br.hitungVolumeKerucut() << std::endl;
    std::cout << "Volume bola: " << br.hitungVolumeBola() << std::endl;

    return 0;
}
