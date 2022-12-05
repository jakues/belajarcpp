#include <iostream>

using namespace std;

void tukar(int &x, int &y);

void hasil(int &x, int &y) {
    printf("a = %d\n", x);
    printf("b = %d\n", y);
}

int main() {
    int a = 1;
    int b = 2;
    printf("Input a : ");
    cin >> a;
    printf("Input b : ");
    cin >> b;

    printf("Before\n");
    hasil(a, b);

    printf("After\n");
    // declare here
    tukar(a, b);
    hasil(a, b);
}

void tukar(int &x, int &y) {
    int z;
    z=x;
    x=y;
    y=z;
}