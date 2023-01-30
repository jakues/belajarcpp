// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#define maksimum 31 // konstankan nilai maksikum karakter dengan rumus (nilai maksimum yang diinginkan + 1)

using namespace std;

int main() {
    char namaLengkap[maksimum];

    cout << "Pengisian Data Diri" << endl;
    cout << "Masukkan nama lengkap" << endl;
    cout << "Nama lengkap tidak boleh lebih dari 30 huruf" << endl;
    cout << "-> ";
    cin.getline(namaLengkap, maksimum);
    cout << "Nama Lengkap Anda : " << namaLengkap;
}