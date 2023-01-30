// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>

using namespace std;

int main() {
    // Single dimensional array
    array <string, 3> num = {"brown", "black", "white"};

    // Multi dimensional array
    // needs double bracket
    // Bad declaration
    // array <array <string, 3>, 2> colors = {{{"red", "green", "blue"}, {"cyan", "yellow", "orange"}}};

    // Better declaration
    array <array <string, 3>, 2> colors = {
        {
            {"red", "green", "blue"},
            {"cyan", "yellow", "orange"}
        }
    };


    // Print single dimensional
    printf("This is single dimensional array : [");
    for (int i=0; i < 3; i++) {
        printf("%s", data(num[i]));
        if (i < 3-1) {
            printf(" ");
        }
    }
    printf("]\n");

    // Print multi dimensional
    printf("This is multi dimensional array  : [");
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("%s", data(colors[i][j]));
            if (j < 2) {
                printf(" ");
            }
        }
        if (i < 1) {
            printf(", ");
        }
    }
    printf("]\n");
}