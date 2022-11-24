// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    char fakultas[50];

    printf("Masukkan fakultas anda : ");
    scanf("%[^\n]", fakultas); // [^\n] ^ merupakan negasi dari line feed itu agar variabel inputan dengan spasi dapat terbaca
    printf("Fakultas anda : %s", fakultas);
}