// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int min;
    int max;
    int sum = 0;
    int i;

    printf("Program Loop Penjumlahan dengan Verbose\n");
    printf("Masukkan angka minimal : ");
    cin >> min;
    printf("Masukkan angka maksimal : ");
    cin >> max;

    for (i = min; i <= max; i++) {
        sum += i;

        printf("%d", i);
        if (i < max) {
            printf(" + ");
        }
    }

    printf(" = %d", sum);
}