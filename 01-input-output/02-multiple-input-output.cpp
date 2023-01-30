// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    string jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec;

    cout << "Masukkan bulan dari januari-desember : " << endl;
    cin >> jan >> feb >> mar >> apr >> may >> jun >> jul >> aug >> sep >> oct >> nov >> dec;
    system("cls");
    cout << "1. " << jan << endl;
    cout << "2. " << feb << endl;
    cout << "3. " << mar << endl;
    cout << "4. " << apr << endl;
    cout << "5. " << may << endl;
    cout << "6. " << jun << endl;
    cout << "7. " << jul << endl;
    cout << "8. " << aug << endl;
    cout << "9. " << sep << endl;
    cout << "10. " << oct << endl;
    cout << "11. " << nov << endl;
    cout << "12. " << dec << endl;
}