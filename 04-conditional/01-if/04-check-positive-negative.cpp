#include <iostream>

using namespace std;

int main() {
    int angka;

    printf("Program untuk Cek Angka Positif/Negatif\n");
    printf("Masukkan angka : ");
    cin >> angka;

    if (angka > 0) {
        printf("Angka adalah bilangan positif\n");
    } else if (angka < 0) {
        printf("Angka adalah bilangan negatif\n");
    } else {
        printf("Angka adalah bilangan 0\n");
    }
}