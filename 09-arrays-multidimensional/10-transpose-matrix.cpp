// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>
#ifdef _WIN32
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;

const int maxCol = 10;

void inputMatrix(int matrix[][maxCol], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            printf("Input value [%d][%d] : ", i, j, matrix[i][j]);
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][maxCol], int r, int c) {
    for (int i=0; i < r; i++) {
        printf("|");
        for (int j=0; j < c; j++) {
            printf("%3d", matrix[i][j]);
        }
        cout<< setw(4)
            << "|\n";
    }
}

void transpose(int matrix[][maxCol], int result[][maxCol], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            result [j][i] = matrix[i][j];
        }
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
    int matrix[r][maxCol];
    // Store result
    int result[r][maxCol];

    // Input matrix 1
    printf("Matrix 1 :\n");
    inputMatrix(matrix, r, c);
    displayMatrix(matrix, r, c);
    system("pause");

    // Transpose it
    transpose(matrix, result, r, c);

    // Display the results
    // needs swap between row and column
    // so use c,r instead of r,c
    printf("Transpose results :\n");
    displayMatrix(result, c, r);
}