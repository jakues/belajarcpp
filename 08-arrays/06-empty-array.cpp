// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>

using namespace std;

int main() {
    // declare empty array with size_max = 3
    array <int, 3> num;

    // here we go
    if (num.empty() != true) {
        printf("Array elements is empty\n");
        // then fill the empty elements
        int dNum;
        printf("Input number to fill array : ");
        cin >> dNum;
        num.fill(dNum);
        // print it using for loops
        printf("Array num[3] : ");
        for (auto i: num) {
            printf("%d ", num[i]);
        }
    } else {
        printf("Array elements not empty\n");
    }
}