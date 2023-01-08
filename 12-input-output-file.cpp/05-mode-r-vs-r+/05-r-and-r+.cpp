#include <iostream>

using namespace std;

int main() {
    FILE* myFile;
    char c[20];
    // r can only read
    if (fopen("myFile.txt", "r") == NULL) {
        printf("File not exist ! \n");
        printf("Create \"myFile.txt\" ...\n");
        myFile = fopen("myFile.txt", "w");
        printf("Pls run me again !\n");
        return 0;
    }

    // r+ can write and read
    // but r+ cant create new file
    printf("Write \"r+ mode\" to myFile.txt");
    myFile = fopen("myFile.txt", "r+");
    fprintf(myFile, "r+ mode\n");
    // try modify myFile.txt or delete it
    // run 2x after modify myFile.txt

    // needs r mode to print out console
    // after write file use r+ mode
    // so declared again here
    myFile = fopen("myFile.txt", "r");
    // read character use r+
    if (fgets(c, 100, myFile) != NULL) {
        printf("\n");
        puts(c);
    }

    fclose(myFile);
}