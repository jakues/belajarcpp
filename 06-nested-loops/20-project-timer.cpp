#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
    int i, j, time;
    char pilihan, opt;

    do {
        time = 0;
        printf("Program timer sederhana.\n");
        printf("Input detik : ");
        cin >> time;

        for (i = time; i >= 0; i--) {
            system("cls");
            printf("%i", i);
            Sleep(1100);
            if (i == 0) {
                Sleep(1500);
                system("cls");
                // beep 5x
                for (j = 1; j <= 5; j++) {
                    printf("beep ");
                    Sleep(1500);
                }
            }
        }

        // user prompt
        system("cls");
        printf("Afh anda ingin menggunakan timer lagi ? [y/n] ?\n");
        printf("--> ");
        cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
}