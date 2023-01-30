// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std; 

int main() {
    float celcius;

    cout << "Konversi Celcius ke Kelvin dan Fahrenheit" << endl;
    cout << "Masukkan suhu celcius : ";
    cin >> celcius;

    // formula
    float kelvin = celcius + 273.15;
    float fahrenheit = (9. * celcius + 160) / 5.;
    printf("%g 'C = %g K = %g 'F\n", celcius, kelvin, fahrenheit);
}