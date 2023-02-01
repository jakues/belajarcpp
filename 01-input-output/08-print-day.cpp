// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Input
    // day, dd-mm-yyyy

    // Expected output : 
    // Monday, 31-12-2022 -> 18 char
    char date[18];

    cout << "Input date : ";
    cin.get(date, 7);

    cout<< "Hari : "
        << date
        << endl;
}