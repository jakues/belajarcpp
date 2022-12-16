#include <iostream>

using namespace std;

// Declare a limit column to 10
const int maxCol = 10;

void displayMatrix(int matrix[][maxCol], int r, int c) {
    for (int i=0; i < r; i++) {
        printf("| ");
        for (int j=0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    // User input for row and column matrix
    int r, c;
    printf("Input row : ");
    cin >> r;
    printf("Input column : ");
    cin >> c;

    // Declare array
    int num[r][maxCol];

    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            printf("Input elements matrix [%d][%d] : ", i, j);
            cin >> num[i][j];
        }
    }

    // Call it
    printf("Matrix :\n");
    displayMatrix(num, r, c);
}