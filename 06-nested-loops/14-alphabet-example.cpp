// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int i, j, max, alphabet = 65;

    max=3;

    for (i = 0; i <= max-1; i++) {
        for (j = 0; j <= i; j++) {
            printf("|%c|%c| ", alphabet+j, alphabet+i);
        }
    }
}