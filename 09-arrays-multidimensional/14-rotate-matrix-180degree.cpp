// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Set default size matrix
const int maxSize = 4;

void reverseMatrix(int matrix[][maxSize], int r, int c) {
    for (int i=0; i < c; i++) {
        for (int j=0, k=c-1; j < k; j++, k--) {
            swap(matrix[j][i], matrix[k][i]);
        }
    }
}

void transposeMatrix(int matrix[][maxSize], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=i; j < c; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void rotateMatrix(int matrix[][maxSize], int r, int c) {
    // First transpose matrix
    transposeMatrix(matrix, r, c);
    // Then reverse it
    reverseMatrix(matrix, r, c);
    // Transpose again
    transposeMatrix(matrix, r, c);
    // And reverse again
    reverseMatrix(matrix, r, c);
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
    printf("Matrix after rotated 180 degree :\n");
    displayMatrix(matrix, r, c);
}