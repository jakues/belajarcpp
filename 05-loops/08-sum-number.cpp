// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int sum, counter;

    for (counter = 1; counter <= 10; counter++) {
        sum += counter;
    }
    
    printf("%d", sum);
}