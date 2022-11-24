// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int angka;

    printf("Program untuk Cek Angka Positif/Negatif\n");
    printf("Masukkan angka : ");
    cin >> angka;

    if (angka > 0) {
        printf("Angka adalah bilangan positif\n");
    } else if (angka < 0) {
        printf("Angka adalah bilangan negatif\n");
    } else {
        printf("Angka adalah bilangan 0\n");
    }
}