// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    //     A 
    //    B B
    //   C   C
    //  D     D
    //   E   E
    //    F F
    //     G

    int i, j, k, max, alphabet = 65;

    printf("Program to print hollow diamond pattern.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max >= 15) {
        printf("Batas maksimum : 15");
    } else if (max <= 1) {
        printf("invalid");
    } else {
        for (i = 1; i <= max; i++) { // print upper part
            for (j = max; j >= i; j--) { // print space
                printf(" ");
            }
            for (k = 0; k <= i*2-1; k++) {
                if (k == 0 || k == 2*i-2) {
                    printf("%c", alphabet+i-1);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (i = 1; i <= max; i++) { // print lower part
            for (j = 0; j <= i; j++) { // print space
                printf(" ");
            }
            for (k = (max-i)*2-1; k >= 1; k--) {
                if (k == 1 || k == (max-i)*2-1) {
                    printf("%c", alphabet+i+max-1);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}