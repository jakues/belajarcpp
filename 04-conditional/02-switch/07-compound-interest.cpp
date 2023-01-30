// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const string INVLD="[!] ";
    const string litMode = "1 tahun staking with 10% APR";
    const string shortMode = "3 tahun staking with 15% APR";
    const string godMode = "10 tahun staking with 20% APR";
    const string hasilInterest = "Hasil compound interest adalah ";
    int menuInterest;
    float amount, rate, period, interest;

    cout << "Program Kalkulasi Compound Interest" << endl;
    cout << "1. " << litMode << endl;
    cout << "2. " << shortMode << endl;
    cout << "3. " << godMode << endl;
    cout << "4. Exit" << endl; 
    cout << "Pilih menu : ";
    cin >> menuInterest;

    switch (menuInterest) {
        case 1:
            cout << litMode << endl;
            cout << "Masukkan jumllah uang : ";
            cin >> amount;

            rate = 10;
            period = 1;
            interest = amount * pow((1 + rate / 100), period);

            cout << hasilInterest << interest << endl;
            break;
        case 2:
            cout << shortMode << endl;
            cout << "Masukkan jumllah uang : ";
            cin >> amount;

            rate = 15;
            period = 3;
            interest = amount * pow((1 + rate / 100), period);

            cout << hasilInterest << interest << endl;
            break;
        case 3:
            cout << godMode << endl;
            cout << "Masukkan jumllah uang : ";
            cin >> amount;

            rate = 20;
            period = 10;
            interest = amount * pow((1 + rate / 100), period);

            cout << hasilInterest << interest << endl;
            break;
        case 4:
            break;
        default:
            cout << INVLD << endl;
            cout << "Tip : input [1-4]" << endl;
            break;
    }
}