// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    const string notifBulanGanjil = " berjumlah 31 hari.";
    const string notifBulanGenap = " berjumlah 30 hari.";
    int bulan, tahun;

    cout << "Masukkan Bulan dalam Angka\t: ";
    cin >> bulan;
    cout << "Masukkan Angka Tahun\t\t: ";
    cin >> tahun;

    bool bulanGanjil = (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12);
    bool bulanGenap = (bulan == 2 || bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11);

    if (bulanGanjil) {
        if (bulan == 1) {
            cout << "Bulan Januari" << notifBulanGanjil << endl;
        } else if (bulan == 3) {
            cout << "Bulan Maret" << notifBulanGanjil << endl;
        } else if (bulan == 5) {
            cout << "Bulan Mei" << notifBulanGanjil << endl;
        } else if (bulan == 7) {
            cout << "Bulan Juli" << notifBulanGanjil << endl;
        } else if (bulan == 8) {
            cout << "Bulan Agustus" << notifBulanGanjil << endl;
        } else if (bulan == 10) {
            cout << "Bulan Oktober" << notifBulanGanjil << endl;
        } else if (bulan == 12) {
            cout << "Bulan Desember" << notifBulanGanjil << endl;
        }
    } else if (bulanGenap) {
        if (bulan == 2) {
            if (tahun % 4) {
                cout << "Bulan Februari berjumlah 28 hari" << endl;
            } else { // kabisat
                cout << "Bulan Februari berjumlah 29 hari" << endl;
            }
        } else if (bulan == 4) {
            cout << "Bulan Maret" << notifBulanGenap << endl;
        } else if (bulan == 6) {
            cout << "Bulan Juni" << notifBulanGenap << endl;
        } else if (bulan == 9) {
            cout << "Bulan September" << notifBulanGenap << endl;
        } else if (bulan == 11) {
            cout << "Bulan Desember" << notifBulanGenap << endl;
        }
    } else {
        cout << "invalid";
    }
}