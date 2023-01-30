// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int N;

void incN() {
    N++;
}

void showN() {
    if (N == 0)
        return;
    printf("showN\t: N is %d\n", N);
}

int main() {
    // another basic user defined function
    // this will print 2 coz function call 2x so
    // N++; N++ == 0+1; 1+1 == 2
    showN();
    incN();
    incN();
    showN();
}