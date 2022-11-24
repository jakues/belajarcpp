// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output
    // 1 2 3 4 5
    //  2 3 4 5
    //   3 4 5
    //    4 5
    //     5

    int i, j, max;

    printf("Program Print Segitiga Terbalik\n");
    printf("Input angka batas : ");
    cin >> max;

    for (i = 1; i <= max; i++) {
        printf("\n");
        for (j = 1; j <= max; j++) {
            printf(" ");
            if (i <= j) {
                printf("%i", j);
            }
        }
    }
}