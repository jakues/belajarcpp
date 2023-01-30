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

    game list_1 = {
        "Minecraft",
        200000,
        "sandbox"
    };

    game list_2 = {
        "Elden Ring",
        100000,
        "rpg"
    };
    
    game list_3 = {
        "X-com 2",
        10000,
        "strategy"
    };

    printf(" > List all games\n");
    printf(" > Quit\n");
    getline(cin, opt);

    if (opt == "list") {
        printf("#%d: \"%s\"\t\t(%s)\t%d\n", 1, data(list_1.gameItem.Name), data(list_1.genre), list_1.gameItem.Price);
        printf("#%d: \"%s\"\t(%s)\t\t%d\n", 2, data(list_2.gameItem.Name), data(list_2.genre), list_2.gameItem.Price);
        printf("#%d: \"%s\"\t\t(%s)\t%d\n", 3, data(list_3.gameItem.Name), data(list_3.genre), list_3.gameItem.Price);
    } else if (opt == "quit") {
        printf("bye");
        return 0;
    } else {
        printf("Invalid");
    }
}