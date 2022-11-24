// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    //     1
    //    1 2
    //   1 2 3
    //  1 2 3 4
    // 1 2 3 4 5

    int i, j, max;

    printf("Program Print Segitiga\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max >= 10) {
        printf("Batas maksimum angka : 9\n");
    } else if (max <= 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) {
            for (j = 0; j < (max - i); j++) {
                printf(" ");
            }
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
}