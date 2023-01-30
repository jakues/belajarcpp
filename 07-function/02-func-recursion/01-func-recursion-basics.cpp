// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n*faktorial(n-1); // this is recursive func
    }
}

int main() {
    int n;
    printf("Input angka : ");
    cin >> n;
    printf("%d faktorial --> %d", n, faktorial(n));
}