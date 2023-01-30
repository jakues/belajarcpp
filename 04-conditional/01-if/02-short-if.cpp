// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int angka;

    printf("This is a short if using operator ternary.\n");
    printf("Hasil 5+6 = ");
    cin >> angka;

    // Syntax is 
    // (condition) ? true : false;
    // the code below same as if branch code
    string hasil = (angka == 11) ? "Jawaban anda benar" : "Jawaban anda salah";

    cout << hasil << endl;
}