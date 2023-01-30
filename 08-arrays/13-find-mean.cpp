// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

float mean(int a[], int n) {
    int i = 0, sum = 0;

    while(i < n) {
        sum += a[i];
        i++;
    }

    return float(sum) / float(n); 
}

int main() {
    int count[] = {10, 5, 2, 11, 5, 6, 7, 2, 3};
    int N = sizeof(count) / sizeof(count[0]);
   
    // Function call
    printf("Mean = %g", mean(count, N));
}