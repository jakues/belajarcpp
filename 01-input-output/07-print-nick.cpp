// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char name[15];

    cout << "Input ur name : ";
    cin.read(name, 5);

    cout<< "Hi "
        << name
        << " ! "
        << "Apa kabar ?"
        << endl;
}