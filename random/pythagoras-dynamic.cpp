// Written by Rill @ jakues.github.io
#include <iostream>
#include <cmath>

using namespace std;

void pythagorean() {
    float a;
    float b;

    cout << "Input panjang sisi segitiga a : ";
    cin >> a;
    cout << "Input panjang sisi segitiga b : ";
    cin >> b;

    float aa=a*a;
    float bb=b*b;
    float c=sqrt((aa+bb));

    cout << "Panjang sisi miring atau c adalah " << c;
}

int main() {
    pythagorean();
}