// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int i;

    for (i = 1; i < 10; i++) {
        if (i > 5) { // stop at 5 --> 1,2,3,4,5
            break;
        }
        printf("%d\n", i);
    }
}