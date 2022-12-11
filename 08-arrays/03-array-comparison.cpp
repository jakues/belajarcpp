#include <iostream>

using namespace std;

int main() {
    string color[] = {"black", "white"};
    int black[] = {3, 5, 1};
    int white[] = {3, 5, 1};
    int max = (sizeof(black)+sizeof(white)) / (sizeof(int)*2);
    string isEqual;

    // print black array
    printf("black : [");
    for (int i=0; i < max; i++) {
        printf("%d", black[i]);
        if (i < 2)
            printf(", ");
    }
    printf("]\n");
    // print white array
    printf("white : [");
    for (int i=0; i < max; i++) {
        printf("%d", white[i]);
        if (i < 2)
            printf(", ");
    }
    printf("]\n");

    // print array elements 1 by 1  :'<
    // this make c++ worst
    for (int i=0; i < max; ++i) {
        for (int j=0; j < max; ++j) {
            if (black[i] == white[j])
                isEqual = "yes";
            else
                isEqual = "no";
        }
    }

    printf("Are equal ? %s", data(isEqual));
}