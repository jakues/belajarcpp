// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int pilihanMenu;
    float panjang, lebar, alas, tinggi, r;
    printf("=================\n");
    printf("Simple Calculator\n");
    printf("=================\n");
    printf("1. Perhitungan Luas Persegi\n");
    printf("2. Perhitungan Luas Segitiga\n");
    printf("3. Perhitungan Luas Lingkaran\n");
    printf("4. Exit\n");
    printf("\nPilih Kalkulator : ");
    cin >> pilihanMenu;
    switch (pilihanMenu) {
        case 1:
            cout << "Input panjang garis : ";
            cin >> panjang;
            cout << "Input lebar garis : ";
            cin >> lebar;
            cout << "Luas bangun tersebut adalah " << panjang*lebar;
            break;
        case 2:
            cout << "Input alas : ";
            cin >> alas;
            cout << "Input tinggi : ";
            cin >> tinggi;
            cout << "Luas segitiga tersebut adalah " << alas*tinggi/2;
            break;
        case 3:
            cout << "Input jari-jari lingkaran : ";
            cin >> r;
            cout << "Luas lingkaran tersebut adalah " << 22./7.*r*r;
        case 4:
            break;
        default:
            cout << "Invalid ! Tip : Masukkan 1-4\n";
            break;
    }
}c