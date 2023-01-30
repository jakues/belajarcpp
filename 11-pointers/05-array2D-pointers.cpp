// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Declare multidimensional array
    int V[2][3] = {
        {1, 2, 3},
        {10, 20, 30}
    };

    // Declare pointer
    // and assign it directly
    int (*P)[2][3] = &V;

    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            // Call array name directly
            // Use: (*P)[i][j] for value
            // Try delete the () on *P
            printf("V[%d][%d] : %-16d address : %-#16p \n", i, j, (*P)[i][j], &P[i][j]);
        }
    }
}