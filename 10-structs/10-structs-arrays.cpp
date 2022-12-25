#include <iostream>

using namespace std;

struct item {
    int Id;
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
        1,
        "Minecraft",
        200000,
        "sandbox"
    };

    list[1] = {
        2,
        "Elden Ring",
        100000,
        "rpg"
    };

    list[2] = {
        3,
        "X-com 2",
        10000,
        "strategy"
    };

    printf(" > List all games\n");
    printf(" > Quit\n");
    getline(cin, opt);

    if (opt == "list") {
        for (int i=0; i < 3; i++) {
            printf("#%d: \"%s\"\t (%s)\t%d\n", list[i].gameItem.Id, data(list[i].gameItem.Name), data(list[i].genre), list[i].gameItem.Price);
        }
    } else if (opt == "quit") {
        printf("bye");
        return 0;
    } else {
        printf("Invalid");
    }
}