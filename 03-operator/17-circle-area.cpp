// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    float phi=float(22)/float(7);
    float r, d, area, circum;

    printf("Perhitungan Luas dan Keliling Lingkaran\n");
    printf("Masukkan diameter lingkaran dalam cm : ");
    cin >> d;
    
    // formula here
    r=d/2.;
    area=phi*r*r;
    circum=phi*d;

    printf("Luas lingkaran\t\t: %g cm^2\n", area);
    printf("Keliling lingkaran\t: %g cm", circum);
}