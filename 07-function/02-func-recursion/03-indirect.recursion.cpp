#include <iostream>

using namespace std;

// indirect recursion not recomended to use

int faktorial(int);

int fkt(int);

int main() {
    int n;
    printf("Input angka : ");
    cin >> n;
    printf("%d faktorial --> %d", n, faktorial(n));
}

int faktorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * fkt(n-1);
    }
}

int fkt(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}