// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#define limit 4

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
    // based on user input
    // declare grade A-D
    array <char, limit> grade = {'A', 'B', 'C', 'D'};
    // declare count
    array <int, limit> count;
    // declare highest var as elements 0
    int highest = count[0];
    // for space
    string gap;

    // user input
    for (int i=0; i < limit; i++) {
        printf("Input jumlah orang dalam grade %c : ", grade[i]);
        cin >> count[i];
        
    }

    // find highest elements
    for (int i=0; i < limit; i++) {
        if (count[i] > highest)
            highest = count[i];
    }

    // print bar
    system("pause");
    system("cls");
    printf("Graph bar :\n");
    //print rows based highest elements
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