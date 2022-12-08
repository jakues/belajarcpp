#include <iostream>

using namespace std;

void artm(int a, int b, int n) {
    printf("%d", a);
    if (n - 1) {
        printf(",");
    }
    if (n > 1) {
        artm(a + b, b, n-1);
    }
}

int main() {
    // User input
    // 3,3,3
    // Expected output
    // aritmethic series : 3,6,9
    int a, b, n;
    printf("Input suku pertama\t: ");
    cin >> a;
    printf("Input nilai beda\t: ");
    cin >> b;
    printf("Input suku terakhir\t: ");
    cin >> n;

    printf("--> Deret aritmatika\t: ");
    artm(a, b, n);
}