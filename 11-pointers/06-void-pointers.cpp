#include <iostream>

using namespace std;

int main() {
    // Pointer declared as
    // void and value NULL
    void *P = NULL;

    printf("P : %-16d address : %-#16p size : %-16d \n", P, &P, sizeof(P));
}