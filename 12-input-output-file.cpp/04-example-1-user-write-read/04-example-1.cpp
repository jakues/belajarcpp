// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

FILE* myFile;

void inputData() {
    string text;
    FILE* myFile = fopen("myFile.txt", "a");

    printf("Input text : ");
    getline(cin, text);

    fprintf(myFile, "%s\n", data(text));

    fclose(myFile);
}

void readData() {
    int read;
    myFile = fopen("myFile.txt", "r");
    
    while (true) {
        read = fgetc(myFile);

        if (feof(myFile))
            break;

        printf("%c", read);
    }

    fclose(myFile);
}

int main() {
    inputData();
    readData();
}