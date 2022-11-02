#include <iostream>

using namespace std;

int main() {
    long long int angka;
    long long int angkaRev = 0;
    printf("Program untuk membalik angka\n");
    printf("Masukkan angka : ");
    cin >> angka;

    while (angka != 0) {
        angkaRev = angkaRev * 10 + (angka % 10);
        angka /= 10;
    }
    printf("Angka setelah dibalik : %d", angkaRev);
}