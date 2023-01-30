// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Pointer declared as
    // void and value NULL
    void *P = NULL;

    printf("P : %-16d address : %-#16p size : %-16d \n", P, &P, sizeof(P));
}