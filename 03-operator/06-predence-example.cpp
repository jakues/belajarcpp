// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    float celcius;

    cout << "Masukkan suhu dalam celcius = ";
    cin >> celcius;

    // formula = (9 * celsius + 160) / 5
    float fahrenheit= (9. * celcius + 160) / 5.;

    printf("%.2f 'C = %.2f 'F\n", celcius, fahrenheit); // %.2f = 2 angka dibelakang koma
}