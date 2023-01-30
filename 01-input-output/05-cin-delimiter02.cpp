// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char tanggal[25]; // batasi maksimum kata / bytes 25
    
    cout << "Masukkan tanggal dan hari : ";
    cin.get(tanggal, 25); // ambil data inputan user sebesar 25
    cout << tanggal;
}