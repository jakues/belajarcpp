// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#ifdef _WIN32
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;

void clear() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void pause() {
    #ifdef _WIN32
    system("pause");
    #else
    do {
        cout << '\n' << "Press the Enter key to continue . . .";
    } while (cin.get() != '\n');
    #endif
}

void sortNum(int *P, int n) {
    for (int i=0; i < n; i++) {
        for (int j=0; j <= i; j++) {
            if ( *(P+i) < *(P+j) ) {
                int t = *(P+i);
                *(P+i) = *(P+j);
                *(P+j) = t;
            }
        }
    }
}

int main() {
    int numSize;

    printf("Input jumlah numbers : ");
    scanf("%d", &numSize);

    // Allocate memory
    // based on user input max size
    int *P = (int*)malloc(numSize * sizeof(int));

    printf("Input %d numbers\n", numSize);
    for (int i=0; i < numSize; i++) {
        printf("number[%d] : ", i+1);
        scanf("%d", P+i);
    }

    pause();
    clear();

    
    // Display num
    // before sort
    printf("Number before sort : ");
    for (int i=0; i < numSize; i++) {
        printf("%d ", *(P+i));
    }

    // Assign sort
    sortNum(P, numSize);
    
    // After sort
    printf("\nNumber after sort : ");
    for (int i=0; i < numSize; i++) {
        printf("%d ", *(P+i));
    }

    // Deallocate memory
    free(P);
}