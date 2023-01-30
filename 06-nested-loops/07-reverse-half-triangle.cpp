// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Expected output
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int i, j, max;

    printf("Program Print Reverse Half Triangle.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max > 10) {
        printf("Batas maksimum = 10");
    } else if (max <= 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) {
            for (j = 1; j <= max-i+1; j++) {
                printf("%i ", j);
            }
            printf("\n");
        }
    }
}