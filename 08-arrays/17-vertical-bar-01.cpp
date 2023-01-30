// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>

using namespace std;

void bar(int row) {
    for (int j=0; j < row; j++) {
        printf("--");
        if (j == row-1)
            printf(">");
    }
}

int main() {
    // this program print the vertical bar
    // based static array
    // declare grade A-D
    array <char, 4> grade = {'A', 'B', 'C', 'D'};
    // declare count
    array <int, 4> count = {7, 10, 5, 3};
    // declare highest var as elements 0
    int highest = count[0];
    // for space
    string gap;

    // find highest elements
    for (int i=0; i < 4; i++) {
        if (count[i] > highest)
            highest = count[i];
    }

    // print bar
    // print rows based highest elements
    for (int i=highest; i > 0; i--) {
        // print column as vertical bar
        for (int j=0; j < 4; j++) {
            if (count[j] >= i) {
                printf("%2s|%2s", data(gap), data(gap));
            } else {
                printf("%5s", data(gap));
            }
        }
        // print endline
        printf("\n");
    }

    // print line
    bar(5*2);
    printf("\n");
    // print detail
    for (const auto& i: grade) {
        printf("%2s%c%2s", data(gap), i, data(gap));
    }
}