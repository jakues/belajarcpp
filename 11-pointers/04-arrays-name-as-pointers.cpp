// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

#define Size 3

int main() {
    // Declare array w/ value
    int V[Size] = {
        2,
        5,
        10
    };

    // Declare pointer var
    int* P;

    // Assign address to *P
    P = &V[0];

    for (int i=0; i < Size; i++) {
        // Call array name directly
        printf("V[%d] : %-16d address : %-#16p \n", i, P[i], &P[i]);
    }
}