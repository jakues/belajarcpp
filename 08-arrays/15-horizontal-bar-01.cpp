// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>

#define max 100

using namespace std;

int main() {
    // this program print the horizontal bar
    // based on user input
    // declare grade A-D
    array <char, 4> grade {'A', 'B', 'C', 'D'};
    // declare count
    array <int, max> count;

    for (const auto& i: grade) {
        printf("Input jumlah mahasiswa dengan nilai %c : ", i);
        cin >> count[i];
    }

    printf("Graph bar :\n");
    for (const auto& i: grade) {
        printf("%c | ", i);
        for (int j=0; j < count[i]; j++) {
            printf("-");
        }
        printf(" (%d)\n", count[i]);
    }
}