// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int menuKonversi, waktu, detik, menit, jam, waktuTemp;

    printf("Program Konversi Waktu\n");
    printf("1. Konversi waktu detik ke jam-menit-detik\n");
    printf("2. Konversi waktu menit ke jam-menit-detik\n");
    printf("3. Konversi waktu jam ke detik\n");
    printf("4. Exit\n");
    printf("Pilih Konversi [1-4]: ");
    cin >> menuKonversi;

    switch (menuKonversi) {
        case 1:
            printf("Program untuk konversi detik ke jam-menit-detik.\n");
            printf("Masukkan waktu dalam detik yang akan dikonversi : ");
            cin >> waktu;

            waktuTemp = waktu;
            jam = waktu / 3600;
            waktu = waktu % 3600;
            menit = waktu / 60;
            waktu = waktu % 60;
            detik = waktu;

            printf("Waktu %d detik dikonversi menjadi %d jam %d menit %d detik\n", waktuTemp, jam, menit, detik);
            break;
        case 2:
            printf("Program untuk konversi menit ke jam-menit-detik.\n");
            printf("Masukkan waktu dalam menit yang akan dikonversi : ");
            cin >> waktu;

            waktuTemp = waktu;
            jam = waktu / 60;
            waktu = waktu % 60;
            menit = waktu;
            detik = waktu / 60;

            printf("Waktu %d menit dikonversi menjadi %d jam %d menit %d detik\n", waktuTemp, jam, menit, detik);
            break;
        case 3:
            float waktuF;
            printf("Program untuk konversi jam ke detik.\n");
            printf("Masukkan waktu dalam jam yang akan dikonversi : ");
            cin >> waktuF;

            waktuTemp = waktuF;
            detik = waktuF * 3600.;

            printf("Waktu %d jam dikonversi menjadi %d detik\n", waktuTemp, detik);
        case 4:
            break;
        default:
            printf("Invalid ! Tip : Masukkan 1-4\n");
            break;
    }
}