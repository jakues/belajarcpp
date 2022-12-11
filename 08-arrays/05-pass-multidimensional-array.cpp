#include <iostream>

using namespace std;

void displayLetter(char letters[][3]) {
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("letters[%d][%d] : %c\n", i, j, letters[i][j]);
        }
    }
}

int main() {
    char letters[2][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'}
    };

    displayLetter(letters);
}