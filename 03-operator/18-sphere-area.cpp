#include <iostream>

using namespace std;

int main() {
    const float phi=22./7;
    float r, area;

    printf("Perhitungan Luas Bola\n");
    printf("Masukkan radius : ");
    cin >> r;

    area=4*phi*r*r;
    printf("%g radius -> area : %g", r, area);
}