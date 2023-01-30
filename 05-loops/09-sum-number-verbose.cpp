// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int min = 1;
    int max = 10;
    int sum = 0;
    int i;

    for (i = min; i <= max; i++) {
        sum += i;
        
        printf("%d", i);
        if (i < max) {
            printf(" + ");
        }
    }

    printf(" = %d", sum);
}