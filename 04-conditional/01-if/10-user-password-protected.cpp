// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    const string errUser        = "Akses ditolak untuk user ";
    const string errPass        = "Password salah untuk user ";
	const string acessGranted   = "Login berhasil untuk user ";
	const string user           = "rill";
    const string pass           = "2002";
    string u, p;

    printf("Program Simulasi Login\n");
    printf("Masukkan user : ");
    cin >> u;
    printf("Masukkan password : ");
    cin >> p;

    if (u != user) {
        cout << errUser << u;
    } else if (p != pass) {
        cout << errPass << u;
    } else {
        cout << acessGranted << u;
    }
}