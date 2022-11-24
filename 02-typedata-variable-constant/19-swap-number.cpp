// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int a, b, aTemp;

    cout << "Input angka pertama : ";
    cin >> a;
    cout << "Input angka kedua : ";
    cin >> b;

    // sebelum swap
    cout << endl;
    cout << "Angka sebelum ditukar" << endl;
    cout << "Angka pertama : " << a << endl;
    cout << "Angka kedua : " << b << endl;

    // swap here
    // menggunakan temporary variabel
    aTemp=a;
    a=b;
    b=aTemp;

    // sesudah swap
    cout << endl;
    cout << "Angka sesudah ditukar" << endl;
    cout << "Angka pertama : " << a << endl;
    cout << "Angka kedua : " << b << endl;
}