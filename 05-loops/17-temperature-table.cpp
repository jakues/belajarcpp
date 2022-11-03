// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int line;
    int lineMax = 50-16;
    float c, r, f;
    
    printf("Input suhu celcius : ");
    cin >> c;

    for (line = 1; line < lineMax; line++) {
        printf("-");
    }
    printf("\n|\t'C\t'R\t'F\t|\n");
    for (line = 1; line < lineMax; line++) {
        printf("-");
    }
    printf("\n");
    for (c = 10; c < 100; c+= 10) {
        r = c * 0.8;
        f = c + 32;
        printf("|\t%g\t%g\t%g\t|\n", c, r, f);
    }
    for (line = 1; line < lineMax; line++) {
        printf("-");
    }
}