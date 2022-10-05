// Written by Rill @jakues.github.io
#include <iostream>

using namespace std;

int main() {
    int angka1=10;
    int angka2=100;

    cout << "Angka sebelum di tukar : " << angka1; cout << " || " << angka2;

    angka1=angka1*angka2; // dua variabel harus dikalikan agar bisa swapping
    angka2=angka1/angka2; // hasil variabel angka2 harus seperti variabel angka1 yang pertama dideklarasikan
    angka1=angka1/angka2; // hasil variabel angka1 diganti dengan angka2 yang pertama dideklarasikan

    cout << endl;
    cout << "Hasil angka setelah ditukar : " << angka1; cout << " || " << angka2;
}