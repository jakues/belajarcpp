// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int i;

    for (i = 1; i < 10; i++) {
        if (i > 8) { // stop at 8
            break;
        }

        if ((i % 2) != 0) { // print when even
            continue;
        }

        printf("%d\n", i);
    }
}