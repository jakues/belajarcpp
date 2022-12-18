#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Set default size matrix
const int maxSize = 4;

void rotateMatrix(int matrix[][maxSize], int r, int c) {
    // First reverse matrix
    for (int i=0; i < r; i++) {
        reverse(matrix[i], matrix[i] + r);
    }

    // Then transpose it
    for (int i=0; i < r; i++) {
        for (int j=i; j < c; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void inputMatrix(int matrix[][maxSize], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            printf("Input value [%d][%d] : ", i, j, matrix[i][j]);
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][maxSize], int r, int c) {
    for (int i=0; i < r; i++) {
        printf("|");
        for (int j=0; j < c; j++) {
            printf("%3d", matrix[i][j]);
        }
        cout<< setw(4)
            << "|\n";
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
    int matrix[r][maxSize];

    // User input matrix elements
    inputMatrix(matrix, r, c);
    displayMatrix(matrix, r, c);

    // Rotate it
    rotateMatrix(matrix, r, c);

    // Display it
    printf("Matrix after rotated 90 degree :\n");
    displayMatrix(matrix, r, c);
}