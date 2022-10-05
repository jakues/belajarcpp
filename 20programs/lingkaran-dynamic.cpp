// Written by Rill @ jakues.github.io
#include <iostream>
#define phi 22/7

using namespace std;
// Use float coz prevent user input decimal value
float r;

// Use void func in order to merge it on simple-calc.cpp
void dialogLingkaran() {
    cout << "Input panjang jari lingkaran : ";
    cin >> r;
}

void luasLingkaran() {
    cout << "Luas lingkaran tersebut adalah " << phi*r*r;
}

void kelilingLingkaran() {
    cout << "Keliling lingkaran tersebut adalah " << phi*2*r;
}

int main() {
    dialogLingkaran();
    cout << endl;
    luasLingkaran();
    cout << endl;
    kelilingLingkaran();
}