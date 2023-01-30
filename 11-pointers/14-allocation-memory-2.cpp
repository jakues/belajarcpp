// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Declare var
    int *P, n;

    // Allocated 5 block int memory
    P = new int[5];

    printf("Input array size : ");
    cin >> n;

    if (n >= 6) {
        printf("Reach max size !");
        return 0;
    }

    for (int i=0; i < n; i++) {
        printf("Input P[%d] --> %-#16p : ", i, &P);
        cin >> P[i];
    }

    printf("\nBefore deallocated\n");
    for (int i=0; i < n; i++) {
        printf("P[%d] : %-6d address : %-#16p \n", i, P[i], &P);
    }

    printf("\nAfter deallocated\n");
    delete []P;
    for (int i=0; i < n; i++) {
        printf("P[%d] : %-6d address : %-#16p \n", i, P[i], &P);
    }
}