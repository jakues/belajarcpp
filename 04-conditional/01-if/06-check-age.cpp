// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    const string warnNotif  = "Peringatan !\n";
    const string notifAge   = "Untuk menggunakan aplikasi ini anda harus berusia 13 tahun atau lebih.\n";
    const string ageOK      = "Anda memenuhi persyaratan umur\n";
    int umur;

    printf("Program Aplikasi Age Restriction\n");
    printf("Masukkan umur anda untuk mengggunakan aplikasi ini : ");
    cin >> umur;

    if (umur <= 12) {
        cout << warnNotif << notifAge;
    } else {
        cout << ageOK;
    }

}