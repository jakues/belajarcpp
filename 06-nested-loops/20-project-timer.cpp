// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void cls() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void slp(int n) {
    #ifdef _WIN32
        Sleep(n);
    #else
        sleep(n);
    #endif
}

int main() {
    int i, j, time;
    char pilihan, opt;

    do {
        time = 0;
        printf("Program timer sederhana.\n");
        printf("Input detik : ");
        cin >> time;

        for (i = time; i >= 0; i--) {
            cls();
            printf("%i", i);
            slp(1100);
            if (i == 0) {
                slp(1500);
                cls();
                // beep 5x
                for (j = 1; j <= 5; j++) {
                    printf("beep ");
                    slp(1500);
                }
            }
        }

        // user prompt
        cls();
        printf("Afh anda ingin menggunakan timer lagi ? [y/n] ?\n");
        printf("--> ");
            cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
}