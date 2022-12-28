#include <iostream>

using namespace std;

int main() {
    // Declare some typedata
    int i = 3;
    float f = 3.14;
    char c = 'X';
    string s = "phi";

    
    // Declare void pointer
    void *P = NULL;
    printf("P -->nil: %-16d addrress : %-#16p \n", P, &P);

    // Assign i to pointer
    P = &i;
    printf("P --> i : %-16d addrress : %-#16p \n", (*(int *)P), &i);
    // Assign f to pointer
    P = &f;
    printf("P --> f : %-16.2f addrress : %-#16p \n", (*(float *)P), &f);
    // Assign c to pointer
    P = &c;
    printf("P --> X : %-16c addrress : %-#16p \n", (*(char *)P), &c);
    // Assign s to pointer
    P = &s;
    printf("P --> s : %-16s addrress : %-#16p \n", data((*(string *)P)), &P);
}