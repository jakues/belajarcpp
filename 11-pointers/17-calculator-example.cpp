#include <iostream>
#ifdef _WIN32
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;


struct info {
    string notifPlus      = "[+] ";
    string notifInvalid   = "[!] ";
} notif;

float tambah(float *a, float *b) {
    return *a + *b;
}

float kurang(float *a, float *b) {
    return *a - *b;
}

float kali(float *a, float *b) {
    return *a * *b;
}

float bagi(float *a, float *b) {
    return *a / *b;
}

void displayCalc(float *a, float *b) {
    printf("Input A : ");
    cin >> *a;
    printf("Input B : ");
    cin >> *b;
}

void clear() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void sayGoodbye() {
    clear();
    printf("%s bye\n", data(notif.notifInvalid));
    return;
}

void bar(int n) {
    for (int i=0; i < n; i++) {
        printf("-");
        if (i == n-1)
            cout<< endl;
    }
}

void displayMsg() {
    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("%s >> ", data(notif.notifPlus));

    int in;
    cin >> in;

    float a = 0, b = 0;

    if (in == 1) {
        bar(20);
        displayCalc(&a, &b);
        printf("Addition : %g\n", tambah(&a, &b));
        bar(20);
    } else if (in == 2) {
        bar(20);
        displayCalc(&a, &b);
        printf("Substraction : %g\n", kurang(&a, &b));
        bar(20);
    } else if (in == 3) {
        bar(20);
        displayCalc(&a, &b);
        printf("Multiply : %g\n", kali(&a, &b));
        bar(20);
    } else if (in == 4) {
        bar(20);
        displayCalc(&a, &b);
        printf("Multiply : %g\n", bagi(&a, &b));
        bar(20);
    } else if (in == 5) {
        sayGoodbye();
        exit(0);
    }
}

int main() {
    char opt;
    bool loop;

    do {
        clear();
        displayMsg();

        printf("Apakah lanjut ? [y/n]\n");
        printf("%s >> ", data(notif.notifPlus));
        cin >> opt;

        if (toupper(opt) == 'N') {
            loop = false;
        } else if (toupper(opt) == 'Y') {
            loop = true;
        } else {
            loop = true;
            printf("%s Invalid\n", data(notif.notifInvalid));
        }

        if (loop == false) {
            sayGoodbye();
            return 0;
        }

    } while (loop == true);
}