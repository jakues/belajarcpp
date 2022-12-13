#include <iostream>

using namespace std;

int sum(int a[], int n) {
    if (n <= 0) {
        return 0;
    }

    return (sum(a, n-1) + a[n-1]);
}

int main() {
    // Expected output
    // 15
    // 5 + 4 + 3 + 2 + 1
    int num[] = {1, 2, 3, 4, 5};
    int max = sizeof(num) / sizeof(num[0]);
    printf("sum = %d", sum(num, max));
}