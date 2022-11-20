#include <iostream>

using namespace std;

int main() {
    // Expected output
    // A      D
    //  B    C
    //   C  B
    //    DA

    int i, j, max, alphabet = 65;
    
    printf("Program Print huruf V.\n");
    printf("Input batas angka : ");
    cin >> max;

    if (max <= 1) {
        printf("Invalid");
    } else if (max > 30) {
        printf("Batas maksimum = 30");
    } else {
        for (i = 0; i < max; i++) {
            for (j = 0; j < max; j++) {
                if (j == i) {
                    printf("%c", alphabet+j);
                } else {
                    printf(" ");
                }
            }
            for (j = 0; j < max; j++) {
                if (j == max-1-i) {
                    printf("%c", alphabet+j);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}