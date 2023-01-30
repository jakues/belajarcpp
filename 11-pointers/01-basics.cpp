// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int n = 10;

    // Pointer variable
    // declared like this
    int *p;

    // To acess pointer variable
    // use unary operator &
    // it return address of variable
    p = &n;

    printf("Value n     -->  %d\n", n);
    printf("Value *p    -->  %#p\n", &p);
    printf("Value p     -->  %d\n", *p);
}