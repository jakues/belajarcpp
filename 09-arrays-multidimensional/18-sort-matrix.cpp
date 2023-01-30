// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

const int maxSize = 3;

void sortMatrix(int matrix[][maxSize], int r, int c) {
    // Using pointer method
    int *ptr = (int *)matrix;
    sort(ptr, ptr+r*maxSize);
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
    // User input row and column
    int r, c;
    printf("Input row : ");
    cin >> r;
    printf("Input column : ");
    cin >> c;

    // Declare array
    int matrix[r][maxSize];

    inputMatrix(matrix, r, c);
    printf("Before sort :\n");
    displayMatrix(matrix, r, c);

    // Call it
    sortMatrix(matrix, r, c);

    // Display matrix after sorted
    printf("After sort :\n");
    displayMatrix(matrix, r, c);
}