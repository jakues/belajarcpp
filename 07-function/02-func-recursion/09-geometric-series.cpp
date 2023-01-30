// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void geo(int a, int b, int n) {
    printf("%d", a);
    if (n - 1) {
        printf(",");
    }
    if (n > 1) {
        geo(a * b, b, n-1);
    }
}

int main() {
    // User input
    // 3,3,3
    // Expected output
    // geometric series : 3,9,27
    int a, b, n;
    printf("Input suku pertama\t: ");
    cin >> a;
    printf("Input nilai beda\t: ");
    cin >> b;
    printf("Input suku terakhir\t: ");
    cin >> n;

    printf("--> Deret geometri\t: ");
    geo(a, b, n);
}