// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char name[30];

    cout << "Input name :  ";
    cin.read(name, 10);

    
    cout<< "Ur First Name : "
        << name
        << endl;
}