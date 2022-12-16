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

void multiplyMatrix(int matrix1[][maxCol],
                    int matrix2[][maxCol],
                    int result[][maxCol], // to store results
                    int r,
                    int c)
{
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            result[i][j] = 0;
            for (int k=0; k < r; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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
    int matrix1[r][maxCol];
    int matrix2[r][maxCol];
    // Store result
    int result[r][maxCol];

    // Input matrix 1
    printf("Matrix 1 :\n");
    inputMatrix(matrix1, r, c);
    displayMatrix(matrix1, r, c);
    system("pause");
    // Input matrix 2
    printf("Matrix 2:\n");
    inputMatrix(matrix2, r, c);
    displayMatrix(matrix2, r, c);
    system("pause");

    // Multiply it
    multiplyMatrix(matrix1, matrix2, result, r, c);

    // Display the results
    printf("Multiply matrix results :\n");
    displayMatrix(result, r, c);
}