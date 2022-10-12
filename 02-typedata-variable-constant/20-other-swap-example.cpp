// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    string namaDepan, namaBelakang;

    cout << "Input nama depan : ";
    getline(cin, namaDepan);
    cout << "Input nama belakang : ";
    getline(cin, namaBelakang);

    cout << "Sebelum ditukar" << endl;
    cout << " | " << namaDepan << " | " << namaBelakang << " | " << endl;
    cout << endl;

    auto tempVar=namaDepan;
    namaDepan=namaBelakang;
    namaBelakang=tempVar;

    cout << "Setelah ditukar" << endl;
    cout << " | " << namaDepan << " | " << namaBelakang << " | " << endl;
    cout << endl;
}