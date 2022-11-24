// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    // Expected output:
    // 1
    //  2
    //   3
    //    4
    //     ...
    int i, j, max;

    printf("Program Print Angka Berpola Tangga/Stairs\n");
    printf("Masukkan batas angka : ");
    cin >> max;

    for (i = 1; i <= max; i++) {
        printf("\n");
        for (j = 1; j <= i; j++) {
            printf(" ");
            if (i <= j) {
                printf("%d", j);
            }
        }
    }

}