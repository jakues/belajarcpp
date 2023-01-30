// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int fibo(int angka) {
    if (angka == 0) {
        return 0;
    } else if (angka == 1 || angka == 2) {
        return 1;
    } else {
        return (fibo(angka-1) + fibo(angka-2));
    }
}

int main() {
    int i, n;

    printf("Deret Fibonacci\n");
    printf("Input batas : ");
    cin >> n;
    printf("Fibonacci dari %d  -->  ", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", fibo(i));
    }
}