// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    string namaLengkap;
    char kelas;
    char garis[11]="==========";

    cout << "Input nama lengkap : ";
    getline(cin, namaLengkap); // use getline coz ussualy name use 2 word or more
    cout << "Input kelas anda [A-Z] : ";
    cin >> kelas;

    cout << endl;
    cout << garis << " Data Kamu " << garis << endl;
    cout << "Nama Lengkap\t: " << namaLengkap << endl;
    cout << "Kelas\t\t: " << kelas << endl;
}