// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct item {
    string Name;
    int Price; 
};

struct game {
    struct item gameItem;
    string genre;
};

int main() {
    string opt;
    game list[3];

    list[0] = {
        "Minecraft",
        200000,
        "sandbox"
    };

    list[1] = {
        "Elden Ring",
        100000,
        "rpg"
    };

    list[2] = {
        "X-com 2",
        10000,
        "strategy"
    };

    printf(" > List all games\n");
    printf(" > Queries a game by id\n");
    printf(" > Quit\n");
    getline(cin, opt);

    if (opt == "list") {
        for (int i=0; i < 3; i++) {
            printf("#%d: \"%s\"\t (%s)\t%d\n", i+1, data(list[i].gameItem.Name), data(list[i].genre), list[i].gameItem.Price);
        }
    } else if (opt == "id") {
        int n;
        printf("Input id > ");
        cin>> n;

        for (int i=0; i < 3; i++) {
            if (n-1 == i) {
                printf("#%d: \"%s\"\t (%s)\t%d\n", i+1, data(list[i].gameItem.Name), data(list[i].genre), list[i].gameItem.Price);
                return 0;
            } else {
                printf("Wrong id\n");
            }
        }
    } else if (opt == "quit") {
        printf("bye");
        return 0;
    } else {
        printf("Invalid");
    }
}