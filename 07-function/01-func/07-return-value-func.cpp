#include <iostream>

using namespace std;

int penjumlahan(int a, int b) {
    return a + b;
}

void hasil() {
    int a1, b1;
    printf("Input angka pertama : ");
    cin >> a1;
    printf("Input angka kedua : ");
    cin >> b1;
    // dont use a1+b1
    // use this instead
    printf("%d + %d = %d\n", a1, b1, penjumlahan(a1, b1));
}

int main() {
    hasil();
}