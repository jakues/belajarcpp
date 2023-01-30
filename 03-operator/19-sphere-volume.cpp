// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    const float phi=22./7;
    float r, vol;

    printf("Perhitungan Volume Bola\n");
    printf("Masukkan radius : ");
    cin >> r;

    vol=(4*phi*r*r*r)/3;
    
    printf("%g radius -> volume : %g", r, vol);
}