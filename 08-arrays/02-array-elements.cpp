// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int base = 10;
    int age[2+1] = {base*1, base*2, base*3};

    printf("Before re declaration : \n");
    for (int i = 0; i < sizeof(age) / sizeof(int); i++) {
        printf("Address : %#p has value : %d\n", &age[i], age[i]);
    }

    // re declare age[0]*age[2]
    age[0] *= age[2];
    // then
    age[1] = (age[0] / base + base);

    printf("\nAfter re declaration : \n");
    for (int i = 0; i < sizeof(age) / sizeof(int); i++) {
        printf("Address : %#p has value : %d\n", &age[i], age[i]);
    }
}