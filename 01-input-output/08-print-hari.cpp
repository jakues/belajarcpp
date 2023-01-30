// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // contoh : Selasa, 31-12-2022 -> 18 karakter
    char tanggal[18];

    cout << "Program untuk membaca hari dari format tanggal dan hari" << endl;
    cout << "Masukkan tanggal dengan format" << endl;
    cout << "Hari, dd-mm-yyyy" << endl;
    cout << "-> ";
    cin.get(tanggal, 7);
    cout << endl << "Hari : " << tanggal;
}