// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Expected output
    // 1 1 1 1
    //  2 2 2
    //   3 3
    //    4
    //    4
    //   3 3
    //  2 2 2
    // 1 1 1 1

    int i, j, k, l, max;

    printf("Program Print Double Triangle.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max > 10) {
        printf("Batas maksimum = 10");
    } else if (max < 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) { // e.g upper reverse triangle
            printf("\n");
            for (j = 1; j <= max; j++) {
                printf(" ");
                if (i <= j) {
                    printf("%i", i);
                }
            }
        }
        printf("\n");
        for (i = 1; i <= max; i++) {// then lower triangle
            for (j = 1; j <= max-i; j++) {
                printf(" ");
            }
            for (k = 1; k <= i; k++) {
                printf(" %i", j);
            }
            printf("\n");
        }
    }
}