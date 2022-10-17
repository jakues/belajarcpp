// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    char nama[31];

    cout << "Masukkan nama lengkap :  ";
    cin.read(nama, 10);
    cout << "Peringatan!!!" << endl;
    cout << "Nama akan dipangkas 10 huruf pertama" << endl;
    cout << "Nama seteleah dipotong :" << nama;
}