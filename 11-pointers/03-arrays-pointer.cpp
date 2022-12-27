#include <iostream>

using namespace std;

const int Size = 3;

int main() {
    // Declare array
    int V[Size] = {
        10,
        100,
        1000
    };

    // Declare pointer var
    int *P;

    // Assign address V[0] to P
    P = V;

    for (int i=0; i < Size; i++) {
        printf("V[%d] : %-16d address : %-#16p \n", i, *P, P);

        // Try uncomment below increment
        P++;
    }
}