#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
    // scheme program to display time on traffic light

    int i, j, time;
    bool on;
    char opt;

    printf("Program on/off traffic light.\n");
    printf("Afh anda akan menyalakan traffic light [y/n] ?\n");
    printf("-> ");
    cin >> opt;

    if (toupper(opt) == 'Y') {
        on=true;
    } else {
        on=false;
    }

    while (on == true) {
        // red
        time = 30; // set timer 30 detik
        for (i = time; i >= 0; i--) {
            system("cls");
            printf("%i", i);
            Sleep(1100);
            if (i == 0) {
                Sleep(1500);
            }
        }
        // green
        time /= 2; // set timer 1/2 dari timer 
        for (i = time; i >= 0; i--) {
            system("cls");
            printf("%i", i);
            Sleep(1100);
            if (i == 0) {
                Sleep(1500);
            }
        }
        // clean then exit
        system("cls");
        return 0;
    }
}