#include <iostream>
#include <algorithm>

using namespace std;

float median(int a[], int n) {
    // first sort array
    sort(a, a+n);

    // then check if number is even
    if (n % 2 != 0) {
        return float( a[n/2] );
    }

    return float(( a[(n-1)/2] + a[n/2] ) / 2. );
}

int main() {
    int num[] = {10, 5, 2, 11, 5, 6, 7, 2, 3};
    int N = sizeof(num) / sizeof(num[0]);

    printf("Median = %g", median(num, N));
}