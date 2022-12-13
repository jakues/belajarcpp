#include <iostream>

using namespace std;

int largest(int num[], int n, int i) {
    // return the element for last index
    if (i == n-1) {
        return num[i];
    }

    // recursive call
    // use max() to find largest elements
    return max(largest(num, n, i+1), num[i]);
}

int main() {
    // try to modify this array
    int num[] = {23, 77, 45, 99, 250};
    int max = sizeof(num) / sizeof(num[0]);

    printf("Largest numbers = %d", largest(num, max, 0));
}