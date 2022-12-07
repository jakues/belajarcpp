#include<iostream>

using namespace std;

bool pali_range(int number) {
    int reverse = 0, n = number;
    while (number > 0) {
        reverse = (reverse * 10) + (number % 10);
        number /= 10;
    }
    return (n == reverse);
}

int main() {
    int i, min, max;

    printf("Palindrome Numbers Range\n");
    printf("Input angka minimum : ");
    cin >> min;
    printf("Input angka maksimum : ");
    cin >> max;

    printf("Palindrome Numbers between %d  <->  %d  --->  ", min, max);
    for (i = min; i <= max; i++) {
        if (pali_range(i)) {
            printf("%d ", i);
        }
    }
}