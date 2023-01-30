// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // output will be
    // 0
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // this same as while branch but the different is the structure of execution condition
    // condition will be executed after code

    int i;

    do {
        cout << i << endl;
        i++;
    } while (i < 10);
}