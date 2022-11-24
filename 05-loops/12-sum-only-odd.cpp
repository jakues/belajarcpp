// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int min;
    int max;
    int sum = 0;
    int i;

    printf("Program Sum Number hanya Ganjil\n");
    printf("Masukkan angka minimal : ");
    cin >> min;
    printf("Masukkan angka maksimal : ");
    cin >> max;
    
    for (i = min; i < max; i++) {
        if ((i % 2) != 0) {
            sum += i;
            printf("%d", i);
            if (i < max - 1) {
                printf(" + ");
            }
        }
    }
    printf(" = %d", sum);
}