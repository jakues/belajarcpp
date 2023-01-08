#include <iostream>

using namespace std;

int main() {
    FILE* myFile;

    // Alphabet
    myFile = fopen("alphabet.txt", "w");
    for (char i='a'; i <= 'z'; i++) {
        fprintf(myFile, "%c ", i);
    }
    fprintf(myFile, "\n");

    // Number
    myFile = fopen("number.txt", "w");
    for (int i=0; i <= 9; i++) {
        fprintf(myFile, "%i ", i);
    }

    int a, n;
    myFile = fopen("alphabet.txt", "r");
    while (a != EOF) {
        a = fgetc(myFile);
        printf("%c ", a);
    }

    fclose(myFile);
}