#include <iostream>

using namespace std;

int main() {
    // Declare pointer as myMusic
    FILE* myMusic;

    // Try modify below structs elemets
    struct songs {
        string Artist;
        string Title;
    };

    songs list1 = {
        Artist: "Muse",
        Title: "Hysteria"
    };

    songs list2 = {
        Artist: "Muse",
        Title: "Knight of Cydonia"
    };

    // Open file in
    // write mode
    myMusic = fopen("myMusic.txt", "w");

    // Print it
    // use fprintf
    fprintf(myMusic, "%s - %s\n%s - %s\n", data(list1.Artist), data(list1.Title), data(list2.Artist), data(list2.Title));

    // Closes pointed file
    fclose(myMusic);
}