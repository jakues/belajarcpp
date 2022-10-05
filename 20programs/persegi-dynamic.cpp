// Written by Rill @ jakues.github.io
#include <iostream>

using namespace std;
// Use float coz prevent user input decimal value
float p;
float l;

// Use void func in order to merge it on simple-calc.cpp
void dialogPersegi() {
    cout << "Input panjang persegi/persegi panjang : ";
    cin >> p;
    cout << "Input lebar persegi/persegi panjang : ";
    cin >> l;
}

void luasPersegi() {
    cout << "Luas bangun persegi/persegi panjang tersebut adalah " << p*l;
}

void kelilingPersegi() {
    cout << "Keliling bangun persegi/persegi panjang tersebut adalah " << 2*(p+l);
}

int main() {
    dialogPersegi();
    cout << endl;
    luasPersegi();
    cout << endl;
    kelilingPersegi();
}