// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Declare V and value
    int V = 10;
    // Declare single pointer
    int *P = &V;
    // Declare double pointer
    int **PT = &P;
    // Declare triple pointer
    int ***PTR = &PT;

    // All the above pointers differ address
    printf("V : %-6d &P : %-#16p &PT : %-#16p &PTR : %-#16p \n", V, &P, &PT, &PTR);
    printf("V : %-6d *P : %-#16d **PT : %-#16d***PTR : %-#16d \n", V, *P, **PT, ***PTR);
}