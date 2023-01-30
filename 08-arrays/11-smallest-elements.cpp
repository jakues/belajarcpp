// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int smallest(int num[], int n, int i) {
    // return elements for last index
    if (i == n-1) {
        return num[i];
    }

    // recursive call
    // use min() func to find smallest number
    return min(smallest(num, n, i+1), num[i]);
}

int main() {
    // try to modify this array
    int num[] = {-1, -99, 99, 1000, 55};
    int max = sizeof(num) / sizeof(num[0]);

    printf("Smallest numbers = %d", smallest(num, max, 0));
}