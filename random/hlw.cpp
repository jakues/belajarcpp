#include <iostream>

using namespace std;

int main() {
    // Expected output
    //    * 
    //   * *
    //  * * *
    // = = = =
    //  * * *
    //   * *
    //    *
    int i, j, k, max;

    printf("Input batas : ");
    cin >> max;

    // upper part
    for (i = 1; i <= max; i++) {
        for (j = 1; j <= max-i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            if (i <= max-1) {
                printf("* ");
            } else {
                printf("= ");
            }
        }
        printf("\n");
    }
    // lower part
    for (i = 1; i <= max-1; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= max-i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}