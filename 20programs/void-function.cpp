// Written by Rill @ jakues.github.io
#include <iostream>

using namespace std;

void Segitiga() {
    float alas;
    float tinggi;

    cout << "Input ukuran alas segitiga : ";
    cin >> alas;
    cout << "Input ukuran tinggi segitiga : ";
    cin >> tinggi;
    
    float luas = alas*tinggi/2;
    cout << "Luas bangun tersebut adalah " << luas;
}

main() {
    Segitiga();
    // cout << "Luas bangun tersebut adalah " << luas;
}