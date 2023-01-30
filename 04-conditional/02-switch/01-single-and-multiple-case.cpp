// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main () {
    char single;
    int kota;

    cout << "This is single case switch, input A yaa :)" << endl;
    cout << " >> ";
    cin >> single;

    switch (single) {
        case 'A':
            cout << "Kota = Yogyakarata" << endl;
    }

    cout << "This is multiple case switch with default case." << endl;
    cout << "Input 1-4 : ";
    cin >> kota;

    switch (kota) {
        case 1:
            cout << "Kota = Jakarta";
            break;
        case 2:
            cout << "Kota = Bandung";
            break;
        case 3:
            cout << "Kota = Semarang";
            break;
        case 4: 
            cout << "Kota = Surabaya";
            break;
        default:
            cout << "Invalid";
            break;
    }
}