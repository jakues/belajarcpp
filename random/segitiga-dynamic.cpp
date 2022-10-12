// Written by Rill @ jakues.github.io
#include <iostream>
#include <cmath> // perlu module cmath untuk perhitungan sqrt

using namespace std;
// Use float coz prevent user input decimal value
float a;
float t;

// Use void func in order to merge it on simple-calc.cpp
void dialogSegitiga() {   
    cout << "Input alas segitiga : ";
    cin >> a;
    cout << "Input tinggi segitiga : ";
    cin >> t;
}

void luasSegitiga() {
    cout << "Luas bangun segitiga tersebut adalah " << a*t/2;
}

void kelilingSegitiga() {
    // cari sisi miring c=sqrt{(a*a)+(b*b)}
    float aa=t*t; // variable a^2
    float bb=a/2*a/2; // variable b^2
    float c=sqrt((aa+bb)); // variable rumus sisi miring
    // Keliling ditemukan
    cout << "Keliling bangun segitiga tersebut adalah " << (2*c)+a;
}

int main() {
    dialogSegitiga();
    luasSegitiga();
    cout << endl;
    kelilingSegitiga();
}