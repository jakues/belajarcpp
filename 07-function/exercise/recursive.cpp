#include <iostream>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n*faktorial(n-1);
    }
}

int main() {
    int n;
    printf("Input angka : ");
    cin >> n;
    printf("%d faktorial --> %d", n, faktorial(n));
}