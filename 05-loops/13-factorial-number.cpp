// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int i, n;
    __int64 factorial = 1;

    printf("Program Mencari Faktorial\n");
    printf("Masukkan angka : ");
    cin >> n;

    if (n < 0) {
        printf("Angka harus positif\n");
        return 0;
    } else if (n >= 34) {
        printf("Batas maksimum\n");
        return 0;
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
    }
    printf("Faktorial %d --> %d", n, factorial);
}