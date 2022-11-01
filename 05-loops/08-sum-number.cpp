#include <iostream>

using namespace std;

int main() {
    int sum, counter;

    for (counter = 1; counter <= 10; counter++) {
        sum += counter;
    }
    
    printf("%d", sum);
}