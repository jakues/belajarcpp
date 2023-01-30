// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int counter = 100;
    int *P = &counter;
    int V = *P;

    printf("counter : %-16d address : %-#16p\n", counter, &counter);
	printf("P       : %-#16p address : %-#16p *P : %-16d\n", P, &P, *P);
	printf("V       : %-16d address : %-#16p\n", V, &V);

    V = 200;
    printf("\n");
    printf("counter : %-16d address : %-#16p\n", counter, &counter);
	printf("P       : %-#16p address : %-#16p *P : %-16d\n", P, &P, *P);
	printf("V       : %-16d address : %-#16p\n", V, &V);

    V = counter;
    counter++;
    printf("\n");
    printf("counter : %-16d address : %-#16p\n", counter, &counter);
	printf("P       : %-#16p address : %-#16p *P : %-16d\n", P, &P, *P);
	printf("V       : %-16d address : %-#16p\n", V, &V);

    *P = 25;
    printf("\n");
    printf("counter : %-16d address : %-#16p\n", counter, &counter);
	printf("P       : %-#16p address : %-#16p *P : %-16d\n", P, &P, *P);
	printf("V       : %-16d address : %-#16p\n", V, &V);

    // inspired from
    // https://github.com/inancgumus/learngo/blob/master/26-pointers/01-pointers/main.go
}