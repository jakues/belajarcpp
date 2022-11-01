#include <iostream>

using namespace std;

int main() {
    int min = 1;
    int max = 10;
    int sum = 0;
    int i;

    for (i = min; i <= max; i++) {
        sum += i;
        
        printf("%d", i);
        if (i < max) {
            printf(" + ");
        }
    }

    printf(" = %d", sum);
}