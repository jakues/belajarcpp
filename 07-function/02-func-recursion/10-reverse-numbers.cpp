#include <iostream>

using namespace std;

int num_reverse(int n) {
    static int sum, temp;

    if (n > 0) {
        temp = n % 10;
        sum = sum * 10 + temp;
        num_reverse(n/10);
    } else {
        return sum;
    }
}

int main() {
    int n;

    printf("Input angka : ");
    cin >> n;

    if (n < 0) {
        printf("Invalid");
        return 0;
    } else {
        printf("Before : %d\n", n);
        printf("After  : %d", num_reverse(n));
    }
}