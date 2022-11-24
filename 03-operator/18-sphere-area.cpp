// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

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