// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int func(int *a) {
    return *a *= *a;
}

int main() {
    // Declare value
    int V = 5;

    // Way #1
    // Assign V to func pointer
    // func(&V);
    // printf("V : %-16d address : %-#16p \n", V, &V);

    // Way #2
    // Assign directly to printf
    // coz func is return value
    printf("V : %-16d address : %-#16p \n", func(&V), &V);
}