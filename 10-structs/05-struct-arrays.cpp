// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct Movie {
    string Title;
    string Genre;
    float Rating;
};

void displayMovie(string Title, string Genre, float Rating) {
    printf("Title : %s\n", data(Title));
    printf("Genre : %s\n", data(Genre));
    printf("Rating: %.2f\n", Rating);
}

int main() {
    // Declare struct var
    // with array type
    Movie list[3];
    int count;

    // User Input
    printf("Input Movie count : ");
    cin >> count;
    for (int i=0; i < count; i++) {
        cin.ignore(); // clear buffer
        printf("Input Movie Title : ");
        getline(cin, list[i].Title);
        printf("Input Movie Genre : ");
        getline(cin, list[i].Genre);
        printf("Input Movie Rating: ");
        cin >> list[i].Rating;
        printf("\n");
    }

    // Print it
    printf("Data Movie\n");
    displayMovie(list->Title, list->Genre, list->Rating);
}