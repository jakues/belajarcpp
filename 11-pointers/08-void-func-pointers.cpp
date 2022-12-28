#include <iostream>

using namespace std;

void func(int *a) {
    // *a = *a * *a
    *a *= *a;
}

int main() {
    // Declare value
    int V = 5;

    // Assign V to func pointer
    func(&V);
    printf("V : %-16d address : %-#16p \n", V, &V);

    // Try uncomment this
    // printf("V : %-16d address : %-#16p \n", func(&V), &V);
    // will error
    // coz the func is void 
    // dont hab return value
}