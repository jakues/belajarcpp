// Written by Rill @ jakues.github.io
#include <iostream>
#include <cmath> // perlu module cmath untuk perhitungan sqrt

using namespace std;

int main() {
    float a=12; // a = alas segitiga sama kaki
    float t=8; // t = tinggi segitiga sama kaki

    // cari sisi miring c=sqrt{(a*a)+(b*b)}
    float aa=t*t; // variable a^2
    float bb=a/2*a/2; // variable b^2
    float c=sqrt((aa+bb)); // variable rumus sisi miring

    // luas segitiga
    cout << "Luas bangun tersebut adalah " << a*t/2;
    cout << endl;
    // keliling segitiga
    cout << "Keliling bangun tersebut adalah " << (2*c)+a;
}