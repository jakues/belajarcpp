// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <algorithm> // library for sort() func

using namespace std;

void display(int num[], int n) {
    int i = 0;
    while (i < n) {
        printf("%d ", num[i]);
        i++;
    }
}

int main() {
    // first declare array
    int num[] = {5, 4, 2, 6, 8, 1, 3, 9, 0, 11};
    int numSize = sizeof(num) / sizeof(num[0]);

    // then display it
    printf("Array before sorting : [ ");
    display(num, numSize);

    // sort it
    sort(num, num + numSize);

    // and display it
    printf("]\nArray after sorting  : [ ");
    display(num, numSize);
    printf("]\n");
}