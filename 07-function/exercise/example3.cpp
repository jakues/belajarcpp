// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int volume(int a, int b, int c) {
    return a*b*c;
}

int main() {
    int p, l, t;
    printf("Kalkulator Volume Balok\n");
    printf("Input panjang : ");
    cin >> p;
    printf("Input lebar : ");
    cin >> l;
    printf("Input tinggi : ");
    cin >> t;

    printf("Volume kubus = %d\n", volume(p, l, t));
}