// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Expected output
    //  1 2 3 4 ...
    //   1 2 3 4 ...
    //    1 2 3 4 ...
    //     1 2 3 4 ...

    int i, j, k, max;

    printf("Program Print Parallelogram/Jajargenjang.\n");
    printf("Input batas maksimal : ");
    cin >> max;

    if (max <= 1) {
        printf("Invalid\n");
    } else {
        for (i = 1; i <= max; i++) {
            for (j = 1; j <= i; j++) {
                printf(" ");
            }
            for (k = 1; k <= max; k++) {
                printf("%i ", k);
            }
            printf("\n");
        }
    }
}