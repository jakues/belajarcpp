// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    struct Movie {
        string Title = "Money Heist";
        string Genre = "Crime, drama, mystery";
        float Rating = 0;
    };

    Movie popular;

    printf("Data Movie 1\n");
    printf("Title : %s\n", data(popular.Title));
    printf("Genre : %s\n", data(popular.Genre));
    printf("Rating: %.2f\n", popular.Rating);

    // Lets fix the rating
    // to 8.2 based on imdb

    popular.Rating = 8.2;
    printf("Rating: %.2f", popular.Rating);
}