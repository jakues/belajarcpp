// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void recursArr(int arr[], int size, int i) {
    if (i == size) {
        return;
    }

    printf("%d ", arr[i]);
    i++;
 
    // recursive call
    recursArr(arr, size, i);
}

int main() {
    int num[] = {1, 2, 3, 4, 5};
    int n = sizeof(num) / sizeof(num[0]);

    printf("Array of num[] = [ ");
    recursArr(num, n, 0);
    printf("]");
}