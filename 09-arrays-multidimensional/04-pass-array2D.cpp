#include <iostream>

using namespace std;

// Declaration of array as multidimensional
// must have bounds for all dimensions except the first

// Normal
// void displayLetter(char letters[][3], int r, int c)

// Try this
// void displayLetter(char letters[][], int r, int c)

// Alternate
// const int mx = 3;
// or
#define mx 3

void displayLetter(char letters[][mx], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            printf("letters[%d][%d] : %c\n", i, j, letters[i][j]);
        }
    }
}

int main() {
    // needs constant !
    // try remove constant
    const int r = 2, c = 3;

    char letters[r][c] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'}
    };

    // Call it
    displayLetter(letters, r, c);
}