// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inputData(int *a, int *b) {
    printf("Input nilai A : ");
    cin >> *a;
    printf("Input nilai B : ");
    cin >> *b;
}

void displayData(int *a, int *b) {
    printf("Nilai A : %d\n", *a);
    printf("Nilai B : %d\n", *b);
}

int main() {
    // Declare var
    int a, b;

    // User input
    inputData(&a, &b);

    // Display b4 swap
    printf("\n--------------------\n");
    printf("Value sebelum swap\n");
    displayData(&a, &b);

    // Assign swap
    swap(&a, &b);

    // Display after swap
    printf("--------------------\n");
    printf("Value sesudah swap\n");
    displayData(&a, &b);
    printf("--------------------\n");
}