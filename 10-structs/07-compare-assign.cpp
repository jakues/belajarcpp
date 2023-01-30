// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct songs {
    string Title, Artist;
};

int main() {
    songs list1 = {
        Title: "Hotel California",
        Artist: "Eagles"
    };

    songs list2 = {
        Title: "Beautiful in White",
        Artist: "Shane Filan"
    };

    if (list1.Title == list2.Title && list2.Artist == list2.Artist) 
        printf("Songs are equals");
    else
        printf("Songs not equals");

    // to compare struct in cpp
    // can't direct compare
    // e.g: list1 == list2
}