// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    const string notifAngka = "Angka terbesar = ";
    float angka1, angka2;

    printf("Program untuk menentukan angka paling besar nilainya.\n");
    printf("Masukkan angka pertama\t: ");
    cin >> angka1;
    printf("Masukkan angka kedua\t: ");
    cin >> angka2;

    if (angka1 == angka2) {
        cout << "Angka sama ->  " << angka1 <<  " = " << angka2; 
    } else if (angka1 >= angka2) {
        cout << notifAngka << angka1;
    }
    else {
        cout << notifAngka << angka2;
    }
}