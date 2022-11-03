#include <iostream>

using namespace std;

int main() {
    int angka1, angka2, hasil, a, b;
    char pilihan;

    do {
        system("cls");
        printf("Program mencari KPK/LCM\n");
        printf("Masukkan angka pertama\t: ");
        cin >> angka1;
        printf("Masukkan angka kedua\t: ");
        cin >> angka2;

        // store temp variable heres
        hasil = (angka1 > angka2) ? angka1 : angka2;
        a = angka1;
        b = angka2;

        do {
            if ((hasil % angka1)==0 && (hasil % angka2)==0) {
                printf("Hasil KPK/LCM dari %d dan %d --> %d\n", a, b, hasil);
                break;
            } else {
                ++hasil;
            }
        } while (true);
        printf("Apakah ingin mengulangi [y/n] ?\n");
        printf("--> ");
        cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
}