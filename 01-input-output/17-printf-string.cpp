// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
using namespace std;

int main() {
    string name = "Agos Kotak";

    printf("c.str() method: ");
    printf(
        "%s\n",
        name.c_str()
    );

    printf("data() method : ");
    printf(
        "%s\n",
        data(name)
    );

    // Try uncomment below
    // printf("%s\n", name);
}