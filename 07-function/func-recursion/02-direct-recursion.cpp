#include <iostream>

using namespace std;

int sum(int angka) {
    if (angka > 0) {
        return angka + sum(angka-1);
    } else {
        return 0;
    }
}

int main() {
    // results = 10
    // 4 + sum(3)
    // 4 + (3 + sum(2))
    // 4 + (3 + 2 + sum(1))
    // 4 + (3 + 2 + 1 + sum(0))
    // 4 + 3 + 2 + 1 + 0
    printf("-->  %d", sum(4));
}