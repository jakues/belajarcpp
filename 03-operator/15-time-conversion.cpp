// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int waktu, detik, menit, jam, waktuTemp;

    cout << "Program untuk konversi detik ke jam-menit-detik."
    cout << "Masukkan waktu dalam detik yang akan dikonversi : ";
    cin >> waktu;

    waktuTemp=waktu;
    jam=waktu/3600;
    waktu=waktu%3600;
    menit=waktu/60;
    waktu=waktu%60;
    detik=waktu;

    printf("Waktu %d detik dikonversi menjadi %d jam %d menit %d detik\n", waktuTemp, jam, menit, detik);
}