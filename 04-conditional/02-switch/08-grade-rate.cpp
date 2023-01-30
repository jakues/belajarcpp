// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char grade;

    cout << "Masukkan grade nilai [A-D/a-d] : ";
    cin >> grade;

    switch (toupper(grade)) {
        case 'A':
            cout << "Nilai Sempurna" << endl;
            break;
        case 'B':
            cout << "Nilai Bagus" << endl;
            break;
        case 'C':
            cout << "Nilai Cukup" << endl;
            break;
        case 'D':
            cout << "Nilai Kurang" << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
    }
}