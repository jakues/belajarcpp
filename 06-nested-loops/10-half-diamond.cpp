// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int i, j, max;

    printf("Program Print Half Diamond.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max > 10) {
        printf("Batas maksimum = 10");
    } else if (max <= 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) { // e.g upper until 4
            for (j = 1; j <= i; j++) {
                printf("%i ", j);
            }
            printf("\n");
        }
        for (i = 1; i <= max-1; i++) { // e.g lower from 3
            for (j = 1; j <= max-i; j++) {
                printf("%i ", j);
            }
            printf("\n");
        }
    }
}