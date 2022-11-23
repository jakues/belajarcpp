#include <iostream>

using namespace std;

int main() {
    // Expected output
    //     1
    //    12
    //   123
    //  1234
    //   123
    //    12
    //     1

    int i, j, k, max;

    printf("Program Print Reverse Half Diamond.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max > 10) {
        printf("Batas maksimum = 10");
    } else if (max <= 1) {
        printf("Invalid");
    } else {
        for (i = 1; i <= max; i++) {
            for (j = 1; j <= max-i; j++) {
                printf(" ");
            }
            for (k = 1; k <= i; k++) {
                printf("%i", k);
            }
            printf("\n");
        }
        for (i = 1; i <= max-1; i++) {
            for (j = 1; j <= i; j++) {
                printf(" ");
            }
            for (k = 1; k <= max-i; k++) {
                printf("%i", k);
            }
            printf("\n");
        }
    }
}