// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <string>

using namespace std;

int main() {  
    char nama[30];

    printf("Masukkan nama lengkap : ");
    // gets() use to get data
    // while 2 word or more
    // coz scanf() read the first word
    // but gets() ady deprecated
    // so uses getline()
    getline(cin, nama);

    printf("Nama anda : ");
    // puts() use to read data
    puts(nama);
}