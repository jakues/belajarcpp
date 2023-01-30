// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    string namaLengkap, alamat, pekerjaan;

    // if 2 or more word use getline() instead of cin method 
    cout << "Masukkan nama lengkap : ";
    getline(cin, namaLengkap);
    cout << "Masukkan alamat lengkap : ";
    getline(cin, alamat);
    cout << "Masukkan pekerjaan : ";
    getline(cin, pekerjaan);

    cout << endl;
    cout << "Nama Lengkap : " << namaLengkap << endl;
    cout << "Alamat Lengkap : " << alamat << endl;
    cout << "Pekerjaan : " << pekerjaan << endl;
}