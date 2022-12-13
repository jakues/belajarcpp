#include <iostream>
#include <array>
// add OS library
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#define max 6

using namespace std;

void bar(int row) {
    for (int j=0; j < row; j++) {
        printf("-");
    }
}

int main() {
    // this program print the horizontal bar
    // string array type
    // based on user input

    // first declare the array and fill it
    array <string, max> faith = {
        "islam",
        "kristen",
        "katolik",
        "hindu",
        "budha",
        "rujiao" // khonghucu
    };
    // then declare an empty array
    array <int, max> count;
    int f = 0;

    for (int i=0; i < max; i++) {
        printf("Input jumlah orang dalam agama %s : ", data(faith[i]));
        cin >> count[i];
    }

    system("cls");

    do {
        printf("%s\t| ", data(faith[f]));
        if (f == 0) {
            bar(count.front());
            printf(" (%d)", count.front());
        } else if (f == max-1) {
            bar(count.back());
            printf(" (%d)", count.back());
        } else {
            bar(count[f]);
            printf(" (%d)", count[f]);
        }
        printf("\n");
        f++;
    } while (f < max);
}