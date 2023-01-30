// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int a;
    bool aB;

    printf("Check number genap/ganjil\n");
    printf("Masukkan angka\t: ");
    cin >> a;

    aB=((a%2)==0);
    printf("angka %d -> genap ?\n");
    printf("Genap=1, Ganjil=0\n");
    printf("Oh ternyata angka mu -> %d", aB);
}