// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int angka1, angka2, a, b;
    char pilihan;

    do {
        system("cls");
        printf("Program mencari FPB/GCD\n");
        printf("Masukkan angka pertama\t: ");
        cin >> angka1;
        printf("Masukkan angka kedua\t: ");
        cin >> angka2;

        // store angka1 and angka2 variable here
        a = angka1;
        b = angka2;

        while (angka1 != angka2) {
            if (angka1 > angka2) {
                angka1 -= angka2;
            } else {
                angka2 -= angka1;
            }
        }
        printf("Hasil FPB/GCD dari %d dan %d --> %d\n", a, b, angka1);
        printf("Apakah ingin mengulangi [y/n] ?\n");
        printf("--> ");
        cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
}