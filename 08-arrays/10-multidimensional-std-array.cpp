#include <iostream>
#include <array>

using namespace std;

int main() {
    // Single dimensional array
    array <int, 3> num = {1, 2, 3};

    // Multi dimensional array
    array <array <string, 3>, 3> colors = {{{"red", "green", "blue"}, {"cyan", "yellow", "orange"}, {"brown", "black", "white"}}};

    // Print single dimensional
    printf("This is single dimensional array : [");
    for (int i=0; i < 3; i++) {
        printf("%d", num[i]);
        if (i < 3-1) {
            printf(" ");
        }
    }
    printf("]\n");

    //Print multi dimensional
    printf("This is multi dimensional array : [");
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            printf("%s", data(colors[i][j]));
            if (j < 2) {
                printf(" ");
            }
        }
        if (i < 2) {
            printf(", ");
        }
    }
    printf("]\n");
}