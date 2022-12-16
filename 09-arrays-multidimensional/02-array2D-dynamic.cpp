#include <iostream>

using namespace std;

int main() {
    // first declare array without elements
    float num[2][3];

    // user input here to fill array elements
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("Input nilai [%d][%d] : ", i, j);
            cin >> num[i][j];
        }
    }

    // print it
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("%.f ", num[i][j]);
        }
    }
}