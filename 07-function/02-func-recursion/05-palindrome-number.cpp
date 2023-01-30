// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int pali_n(int number) {
    static int reverse;
    if (number > 0) {
        reverse = (reverse * 10) + (number % 10);
        pali_n(number / 10);
        return reverse;
    } else {
        return 0;
    }
}

int main() {
    int n;
    bool isTrue;
    
    printf("Palindrome Numbers\n");
    printf("Input angka : ");
    cin >> n;

    if (pali_n(n) == n) {
        isTrue = true;
    } else {
        isTrue = false;
    }

    if (isTrue == true) {
        printf("Angka %d adalah palindrome\n", n);
    } else {
        printf("Angka %d bukan palindrome\n", n);
    }
}