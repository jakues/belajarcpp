#include <iostream>

using namespace std;

int main() {
    // A variable declaration with structure declaration.
    struct Movie {
        string Title;
        string Genre;
        float Rating;
    };

    // The variable p1 is declared with 'popular'
    Movie popular;

    // Fill data
    popular.Title = "Money Heist";
    popular.Genre = "Crime, drama, mystery";
    popular.Rating = 8.2;

    // Print it
    printf("Data Movie\n");
    printf("Title : %s\n", data(popular.Title));
    printf("Genre : %s\n", data(popular.Genre));
    printf("Rating: %.2f\n", popular.Rating);
}