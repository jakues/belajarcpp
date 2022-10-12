#include <iostream>

using namespace std;

int main() {
    float angka1;
    float angka2;

    cout << "Input angka pertama : ";
    cin >> angka1;
    cout << "Input angka kedua : ";
    cin >> angka2;
    cout << "Angka sebelum ditukar : " << angka1 ; cout << " || " << angka2;

    angka1=angka1*angka2; // dua variabel harus dikalikan agar bisa swapping
    angka2=angka1/angka2; // hasil variabel angka2 harus seperti variabel angka1 yang pertama dideklarasikan
    angka1=angka1/angka2; // hasil variabel angka1 diganti dengan angka2 yang pertama dideklarasikan

    cout << endl;
    cout << "Angka setelah ditukar : " << angka1 ; cout << " || " << angka2;
}