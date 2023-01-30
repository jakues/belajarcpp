// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

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