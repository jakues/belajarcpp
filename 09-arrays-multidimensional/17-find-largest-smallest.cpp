// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>

using namespace std;

const int maxSize = 4;

void minMax(int matrix[][maxSize], int n) {
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n/2; j++)
        {
            // Compare elements from beginning
            // and end of current row
            if (matrix[i][j] > matrix[i][n-j-1]) {
                if (min > matrix[i][n-j-1])
                    min = matrix[i][n-j-1];
                if (max< matrix[i][j])
                    max = matrix[i][j];
            }
            else {
                if (min > matrix[i][j])
                    min = matrix[i][j];
                if (max< matrix[i][n-j-1])
                    max = matrix[i][n-j-1];
            }
        }
    }
    printf("Largest element : %d\n", max);
    printf("Smallest element : %d\n", min);
}

void inputMatrix(int matrix[][maxSize], int n) {
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            printf("Input value [%d][%d] : ", i, j, matrix[i][j]);
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][maxSize], int n) {
    for (int i=0; i < n; i++) {
        printf("|");
        for (int j=0; j < n; j++) {
            printf("%3d", matrix[i][j]);
        }
        cout<< setw(4)
            << "|\n";
    }
}

int main() {
    int n;

    printf("Input matrix size [2,3,4]: ");
    cin >> n;

    int matrix[n][maxSize];

    inputMatrix(matrix, n);
    displayMatrix(matrix, n);

    minMax(matrix, n);
}