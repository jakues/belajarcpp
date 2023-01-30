// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Declare pointer to var
    FILE* myMusic;
    int read;

    // Creates a file
    // with access read mode
    myMusic = fopen("myMusic.txt", "r");

    // Loops to print every character
    do {
        // Read a file
        read = fgetc(myMusic);

        // EOF case
        if (feof(myMusic))
            break;
        
        // Print every character
        printf("%c", read);
    } while (true);

    // Closes file
    // pointed by myMusic
    fclose(myMusic);
}