// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>

using namespace std;

const int maxSize = 4;

void uniqueEle(int matrix[][maxSize], int r, int c) {
    int maxs = 0;
    bool flag = 0;

    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            // Find largest element
            if (maxs < matrix[i][j]) {
                maxs = matrix[i][j];
            }
        }
    }

    // Initialize 1D array
    int n[maxs+1] = {0};
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            n[matrix[i][j]]++;
        }
    }

    // Print unique elements
    printf("Unique elements : ");
    for (int i=1; i <= maxs; i++) {
        if (n[i] == 1) {
            printf("%d ", i);
            flag = true;
        }
    }

    if(!flag) {
        printf("No unique elements in matrix !");
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
    // Unique elements = no more same elements in matrix
    //
    // Case 1
    // User input:
    // 1 1
    // 2 3
    // Expected output:
    // Unique elements : 2 3
    //
    // Case 2
    // User input:
    // 1 1
    // 1 1
    // Expected output:
    // No unique elements in matrix
    
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

    // Kick off
    uniqueEle(matrix, r, c);
}