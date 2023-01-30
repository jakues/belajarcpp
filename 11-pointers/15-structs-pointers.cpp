// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct list {
    float feets, meters;
};

int main() {
    list *distance, P;

    distance = &P;

    printf("Meters to feets\n");
    printf("Input meters : ");
    cin >> (*distance).meters;

    (*distance).feets = (*distance).meters * 3.2808399;

    printf("%g meters  -->  %g feets\n", (*distance).meters, (*distance).feets);
}