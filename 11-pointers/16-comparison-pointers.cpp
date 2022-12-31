#include <iostream>

using namespace std;

int compare(char *a, char *b) {
    while (*a == *b) {

        // case nil
        if (*a == '\0' || *b == '\0') {
            break;
        }

        a++;
        b++;
    }

    // return compare
    if (*a == '\0' && *b == '\0') {
        return 0;
    } else {
        return -1;
    }
}

char inputData(char *a, char *b) {
    printf("Input word 1 : ");
    gets(a);
    printf("Input word 2 : ");
    gets(b);

    // case nil
    if (*a == '\0' && *b == '\0') {
        printf("Invalid");
        exit(0);
    } else {
        return *a;
        return *b;
    }
}

const int maxSize = 100;

int main() {
    char a[maxSize], b[maxSize];

    inputData(a, b);

    char result = compare(a, b);

    if (result == 0) {
        printf("Words are Equal\n");
    } else {
        printf("Words are not Equal\n");
    }
}