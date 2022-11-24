// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int i, max, count, prime;
    char pilihan;
    bool isPrime = true;
    int ganjil;

    do {
        system("cls");
        printf("Masukkan angka batas : ");
        cin >> max;
        printf("\n");
        count = 0;
        for (i = 2; i <= max; i++) {
            prime = ((i % 2)!= 0 
                && (i % 3)!= 0
                && (i % 5)!= 0);
            if (prime) {
                printf("|%d", i);
            } else if (i == 2) {
                printf("|%d", i);
            } else if (i == 3 || i == 5) {
                printf("|%d", i);
            }
            count += prime;
        }
        printf("|\nsum = %d", count+2);
        printf("Apakah ingin mengulangi [y/n] ?\n");
        printf("--> ");
        cin >> pilihan;
        max++;
    } while (toupper(pilihan) == 'Y');
}