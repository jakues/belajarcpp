// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main () {
    int umur, pilihan;

    cout << "1. Perempuan" << endl;
    cout << "2. Laki-Laki" << endl;
    cout << "Pilih gender\t: ";
    cin >> pilihan;
    cout << "Masukkan umur\t: ";
    cin >> umur;

    switch (pilihan) {
        case 1:
            if (umur < 6) {
                cout << "Anak-anak";
            } else if (umur < 17) {
                cout << "Gadis";
            } else if (umur < 60 ) {
                cout << "Wanita dewasa";
            } else if (umur < 150) {
                cout << "Nenek";
            } else {
                cout << "Bukan orang xD";
            }
            break;
        case 2:
            if (umur < 6) {
                cout << "Anak-anak";
            } else if (umur < 17) {
                cout << "Perjaka";
            } else if (umur < 60) {
                cout << "Pria dewasa";
            } else if (umur < 150) {
                cout << "Kakek";
            } else {
                cout << "Bukan orang xD";
            }
            break;
        default:
            cout << "Invalid";
            break;
    }
}