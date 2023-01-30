// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    float meters, feet;

    cout << "Konversi feets to meters" << endl;
    cout << "Input ukuran yg akan dikonversi : ";
    cin >> feet;

    // formula
    meters = feet * 0.3048;

    printf("%g feets = %g meters\n", feet, meters);
}