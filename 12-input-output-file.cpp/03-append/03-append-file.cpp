// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    FILE* myMusic;

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

    // First
    // Write file
    myMusic = fopen("myMusic.txt", "w");
    fprintf(myMusic, "%s - %s\n%s - %s\n", data(list1.Artist), data(list1.Title), data(list2.Artist), data(list2.Title));

    // Then
    // append this list
    songs list3 = {
        Artist: "Eagles",
        Title: "Hotel California"
    };

    // To append use "a"
    myMusic = fopen("myMusic.txt", "a");
    fprintf(myMusic, "%s - %s\n", data(list3.Artist), data(list3.Title));

    // Closes pointed file
    fclose(myMusic);
}