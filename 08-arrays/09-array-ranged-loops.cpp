#include <iostream>
#include <array>

using namespace std;

int main() {
    array <string, 3> colors = {"red", "green", "blue"};

    // try uncomment code below 
    // normal type loops
    // for (int i=0; i < 3; i++) {
    //     printf("%s ", data(colors[i]));
    // }
    // printf("\n");

    // short type loops supported on array
    // KISS method xD
    for (const auto& i: colors) {
        printf("%s ", data(i));
    }
}