// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Declare var
    int *P, n, sum = 0;
    
    // Allocate 5 block int memory
    // to pointer P
    // P now arrays
    P = (int*) malloc(5 * sizeof(int));

    // Case if not allocated
    if (P == NULL) {
        printf("Memory not allocated !");
        return 0;
    }

    printf("Input array size : ");
    cin >> n;

    // Case n >= 7
    if (n >= 7) {
        printf("Reach max size !");
        return 0;
    }

    // User input
    for (int i=0; i < n; i++) {
        printf("Input elements [%d] --> %#p : ", i, P+i);
        scanf("%d", P+i);
        sum += *(P + i);
    }

    // Deallocate memory
    free(P);

    printf("\n");
    printf("--> Sum : %d\n", sum);
}