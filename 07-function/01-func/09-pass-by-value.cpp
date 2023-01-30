// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <math.h>

using namespace std;

void persegi(int a) {
    printf("Luas persegi %d cm  --> %g\n", a, pow(a, 2));
    printf("Keliling persegi %d cm  --> %d\n", a, a*4);
}

int main() {
    // this is pass by value 
    // func call then directly fill value
    persegi(3);
    printf("\n");
    persegi(5);
}