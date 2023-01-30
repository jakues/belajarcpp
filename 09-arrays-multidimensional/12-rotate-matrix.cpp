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

// Set max size matrix
const int r = 4;
const int c= 4;

// row - Starting row index
// x - ending row index
// col - starting column index
// y - ending column index
// i - iterator
void rotateMatrix(int matrix[r][c], int x, int y) {
    // Method :
    // 1. Move elements of top row. 
    // 2. Move elements of last column. 
    // 3. Move elements of bottom row. 
    // 4. Move elements of first column.
    int row = 0;
    int col = 0;
    int prev, cur;

    while (row < x && col < y) {
        if (row + 1 == x || col + 1 == y) {
            break;
        }

        // Store first elemenst
        prev = matrix[row+1][col];

        // do method 1
        for (int i=col; i < y; i++) {
            cur = matrix[row][i];
            matrix[row][i] = prev;
            prev = cur;
        }
        row++;

        // do method 2
        for (int i=row; i < y; i++) {
            cur = matrix[i][y-1];
            matrix[i][y-1] = prev;
            prev = cur;
        }
        y--;

        // do method 3
        if (row < x)
        {
            for (int i = y-1; i >= col; i--) {
                cur = matrix[x-1][i];
                matrix[x-1][i] = prev;
                prev = cur;
            }
        }
        x--;

        // do method 4
        if (col < y)
        {
            for (int i = x-1; i >= row; i--) {
                cur = matrix[i][col];
                matrix[i][col] = prev;
                prev = cur;
            }
        }
        col++;
    }
}

void inputMatrix(int matrix[r][c], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            printf("Input value [%d][%d] : ", i, j, matrix[i][j]);
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[r][c], int r, int c) {
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
    // Expected output
    // Input:
    // 1    2    3    4    
    // 5    6    7    8
    // 9    10   11   12
    // 13   14   15   16
    // Output:
    // 5    1    2    3
    // 9    10   6    4
    // 13   11   7    8
    // 14   15   16   12
    // Pattern:
    // -> -> -> ->
    // ^         v
    // ^         v
    // ^         v
    // <- <- <- <-

    // Declare array
    int matrix[r][c];

    // User input elements
    printf("Input matrix 4x4 :\n");
    inputMatrix(matrix, r, c);
    displayMatrix(matrix, r, c);
    system("pause");

    // Rotate it and display
    rotateMatrix(matrix, r, c);
    printf("Results :\n");
    displayMatrix(matrix, r, c);
}