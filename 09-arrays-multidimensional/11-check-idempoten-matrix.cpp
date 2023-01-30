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

void multiplyMatrix(int matrix[][maxCol],
                    int result[][maxCol], // to store results
                    int r,
                    int c)
{
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            result[i][j] = 0;
            for (int k=0; k < r; k++) {
                result[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }
}

bool checkIdempoten(int matrix[][maxCol],
                    int result[][maxCol],
                    int r,
                    int c)
{
    for (int i=0; i < r; i++) {
        for (int j=0; j < c; j++) {
            if (matrix[i][j] != result[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // Idempoten matrix = matrix a * matrix a = matrix a
    // User input
    //  3  -6
    //  1  -2
    // Expected output
    // Idempoten matrix


    // User input for row and column matrix
    int r, c;
    printf("Input row : ");
    cin >> r;
    printf("Input column : ");
    cin >> c;

    // Declare array
    int matrix[r][maxCol];
    //int matrix2[r][maxCol];
    // Store result
    int result[r][maxCol];

    // Input matrix
    printf("Matrix :\n");
    inputMatrix(matrix, r, c);
    displayMatrix(matrix, r, c);
    system("pause");

    multiplyMatrix(matrix, result, r, c);

    if (checkIdempoten(matrix, result, r, c)) {
        printf("Idempoten matrix");
    } else {
        printf("Not idempoten matrix");
    }
}