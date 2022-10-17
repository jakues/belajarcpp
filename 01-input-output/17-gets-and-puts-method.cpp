// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // gets dipakai untuk mengambil data input yang memiliki 2 kata atau lebih untuk type data char
    // puts digunakan untuk membaca data input 
    // jika menggunakan scanf maka string dengan spasi akan terbaca kata awal saja maka digunakan gets
    char nama[30];

    printf("Masukkan nama lengkap : ");
    gets(nama);
    printf("Nama anda : ");
    puts(nama);
}