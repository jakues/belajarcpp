#include <iostream>
#include <array>

using namespace std;

// Declare constant for row and column
// Coz stl array cant resizeable
const int row = 2;
const int col = 3;

void displayMatrix(array <array <int, col>, row> num) {
    for (int i=0; i < row; i++) {
        printf("| ");
        for (int j=0; j < col; j++) {
            printf("%d ", num[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    // Create array
    array <array <int, col>, row> num = {
        {
            {0, 1, 2},
            {3, 4, 5}
        }
    };

    // Call it
    displayMatrix(num);
}