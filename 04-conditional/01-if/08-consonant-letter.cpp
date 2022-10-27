// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    char huruf;

    printf("Program untuk menentukan huruf vokal/consonant.\n");
    printf("Masukkan huruf : ");
    cin >> huruf;

    const bool angka = (
    huruf == '1' || huruf == '2' || huruf == '3' || huruf == '4' || huruf == '5' ||
    huruf == '6' || huruf == '7' || huruf == '8' || huruf == '9' || huruf == '0'
    );
    const bool hurufKapital = (huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O');
    const bool hurufKecil = (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o');
    
    if (angka) {
        cout << "Inputan merupakan angka.";
    }
    else if (hurufKapital || hurufKecil)
        cout << "huruf = " << huruf << "  -> merupakan huruf vokal.";
    else
        cout << "huruf = " << huruf << "  -> merupakan huruf konsonan.";
}