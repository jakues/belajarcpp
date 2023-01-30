// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <iomanip>

using namespace std;

struct song {
    string Title, Artist;
};

struct song inputData();

void displayData(string Title, string Artist) {
    cout<< Title
        << " "
        << setw(20)
        << Artist
        << endl;
}

int main() {
    struct song list;
    struct song list2;

    printf("Input song 1\n");
    list = inputData();
    printf("Input song 2\n");
    list2 = inputData();

    cout<< "TITLE"
        << setw(20)
        << "ARTIST"
        << endl;
    displayData(list.Title, list.Artist);
    displayData(list2.Title, list2.Artist);
}

struct song inputData() {
    struct song song1;

    printf("Input Song Title : ");
    getline(cin, song1.Title);
    printf("Input Song Artist: ");
    getline(cin, song1.Artist);
    printf("\n");
    return song1;
}