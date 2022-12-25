#include <iostream>

using namespace std;

struct distance {
    float meters, feets;
};

int main() {
    struct distance d;

    printf("Input feets : ");
    cin >> d.feets;

    // formula
    d.meters = d.feets * 0.3048;

    printf("%g feets = %g meters\n", d.feets, d.meters);
}