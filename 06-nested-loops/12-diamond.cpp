// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    //    1
    //   1 2
    //  1 2 3
    // 1 2 3 4
    //  1 2 3
    //   1 2
    //    1

    int i, j, k, max;

    printf("Program Print Diamond/Belah Ketupat.\n");
    printf("Input angka maksimal : ");
    cin >> max;

    if ( max > 10) {
        printf("Batas maksimum = 10");
    } else if (max <= 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) { // e.g upper until 1 2 3 4
            for (j = 1; j <= max-i; j++) { // space for triangle upper
                printf(" ");
            }
            for (k = 1; k <= i; k++) {
                printf("%i ", k);
            }
            printf("\n");
        }
        for (i = 1; i < max; i++) { // e.g lower start from 1 2 3
            for (j = 1; j <= i; j++) { // space for reverse triangle lower
                printf(" ");
            }
            for (k = 1; k <= max-i; k++) {
                printf("%i ", k);
            }
            printf("\n");
        }
    }
}