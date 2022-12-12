#include <iostream>

using namespace std;

int main() {
    // this is multidimensional array
    // up 2 or more
    char letters[3][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'}
    };
    int max = sizeof(letters) / sizeof(int);

    for (int i = 0; i <= max; i++) {
        for (int j = 0; j <= max; j++) {
            printf("%c ", letters[i][j]);
        }
        if (i < max-1)
            printf("\n");
    }
}