// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Expected output:
    // 1
    //  2
    //   3
    //    4
    //     5
    //    1
    //   2
    //  3
    // 4

    int i, j, k, max;

    printf("Program Print Tangga kebawah dan dibalik.\n");
    printf("Input batas angka : ");
    cin >> max;

    for (i = 1; i <= max; i++) {
        printf("\n");
        for (j = 1; j <= i; j++) {
            printf(" ");
            if (i <= j) {
                printf("%i", j);
            }
        }
    }
    printf("\n");
    for (i = 1; i <= max-1; i++) {
        printf(" ");
        for (j = max-1; j > i; j--) {
            printf(" ");
        }
        printf("%i\n", j);
    }
}