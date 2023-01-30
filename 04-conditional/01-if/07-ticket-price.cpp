// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    const string jenisTiketA    = "Harga tiket untuk pengunjung anak-anak = Rp 10.000,-\n";
    const string jenisTiketB    = "Harga tiket untuk pengunjung dewasa = Rp 25.000,-\n";
    const string notifBayar     = "Harga tiket total -> Rp ";
    const string notifThx       = "Terima Kasih\n";
    int umur, pengunjung, tiketAnak, tiketDewasa;

    printf("Harga Tiket Masuk Kebun Binatang\n");
    printf("Masukkan umur : ");
    cin >> umur;
    printf("Masukkan jumlah pengunjung : ");
    cin >> pengunjung;

    tiketAnak = 10000;
    tiketDewasa = 25000;


    if (umur <= 12) {
        cout << jenisTiketA;
        cout << notifBayar << pengunjung*tiketAnak << endl;
        cout << notifThx;
    } else {
        cout << jenisTiketB;
        cout << notifBayar << pengunjung*tiketAnak << endl;
        cout << notifThx;
    }

}