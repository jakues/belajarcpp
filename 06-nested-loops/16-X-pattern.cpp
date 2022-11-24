// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    // A   E
    //  B D
    //   C
    //  B D
    // A   E
    int i, j, max, alphabet = 65;

    printf("Program to print X pattern.\n");
    printf("Input batas maksimal : ");
    cin >> max;

    if (max >= 14) {
        printf("Batas maksimum : 14");
    } else if (max <= 2) {
        printf("invalid");
    } else {
        for (i = 0; i < max; i++) {
            for (j = 0; j < max; j++) {
                if (j == i || i+j == max-1) {
                    printf("%c", alphabet+j);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}