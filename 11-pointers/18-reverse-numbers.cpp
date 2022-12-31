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

int main() {
    int numSize;

    printf("Input jumlah numbers : ");
    cin >> numSize;

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

    // Display number
    // before swap
    printf("Numbers list : ");
    for (int i=0; i < numSize; i++) {
        printf("%d ", *(P+i));
    }

    // Display number
    // using reverse loops
    printf("\nReverse numbers : ");
    for (int i=numSize-1; i >= 0; i--) {
        printf("%d ", *(P+i));
    }

    // Deallocate memory
    free(P);
}