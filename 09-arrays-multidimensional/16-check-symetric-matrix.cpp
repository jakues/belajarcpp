#include <iostream>
#include <iomanip>

using namespace std;

const int maxSize = 4;

void transposeMatrix(int matrix[][maxSize], int result[][maxSize], int r, int c) {
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            // Store transposed matrix on result var
            result[i][j] = matrix[j][i];
        }
    }
}

bool isSymmetric(int matrix[][maxSize], int r, int c) {
    // First declare result var
    int result[r][maxSize];
    // Transpose it
    transposeMatrix(matrix, result, r, c);
    // Check symmetric
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            if (matrix[i][j] != result[i][j])
                return false;
        }
    }
    return true;
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
    // Symmetric matrix example:
    // 1 2 3
    // 2 3 1
    // 3 1 2
    // Not symetric matrix:
    // 1 2 3
    // 1 2 3
    // 1 2 3

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

    // Check symmetric
    if (isSymmetric(matrix, r, c)) {
        printf("Matrix is symmetric");
    } else {
        printf("Matrix not symmetric");
    }
}
    