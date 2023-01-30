// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int x, y;

    // pre increment
    x=1; // 2 -> pre=operate first then call -> x=1+x=2 then call x var
    y=++x; // 1+x=2
    
    cout << "pre increment" << endl;
    cout << "x=" << x << " ";
    cout << "y=" << y << endl;

    // post increment
    x=1; // 1 -> post=call first then operate -> x=x
    y=x++; // x+1=2
    
    cout << "post increment" << endl;
    cout << "x=" << x << " ";
    cout << "y=" << y << endl;
}