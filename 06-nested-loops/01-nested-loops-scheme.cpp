// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("|%d|%d|\t", i, j);
        }
    }
}