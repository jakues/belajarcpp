// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int angka;

    printf("Program untuk Cek Angka Genap/Ganjil\n");
    printf("Masukkan angka : ");
    cin >> angka;

    string hasil = (angka & 1) ? "Angka tersebut ganjil" : "Angka tersebut genap";
    cout << hasil << endl;

    // Alternate
    // if (angka & 1) {
    //     printf("Angka tersebut ganjil\n");
    // } else {
    //     printf("Angka tersebut genap\n");
    // }

    // bool angkaBool;
    // if (angkaBool = ((angka%2)==1)) {
    //     printf("Angka tersebut ganjil\n");
    // } else {
    //     printf("Angka tersebut genap\n");
    // }
    
}