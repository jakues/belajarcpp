#include <iostream>

using namespace std;

int main() {
    int angka;

    printf("Program untuk Cek Angka Genap/Ganjil\n");
    printf("Masukkan angka : ");
    cin >> angka;

    if (angka & 1) {
        printf("Angka tersebut ganjil\n");
    } else {
        printf("Angka tersebut genap\n");
    }

    // Alternate
    // bool angkaBool;
    // if (angkaBool = ((angka%2)==1)) {
    //     printf("Angka tersebut ganjil\n");
    // } else {
    //     printf("Angka tersebut genap\n");
    // }
    
}