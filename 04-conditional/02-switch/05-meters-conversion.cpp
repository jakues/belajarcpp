// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    const string OK=" [OK]";
    const string INVLD="[!] ";
    const string INFO="[i] ";
    const string QST="[?] ";
    int menuUkuran;
    float meters, feets, inches, yards, km;

    printf("Program Konversi Ukuran (Meter)\n");
    printf("1. Konversi meters -> feets\n");
    printf("2. Konversi feets -> meters\n");
    printf("3. Konversi meters -> inches\n");
    printf("4. Konversi inches -> meters\n");
    printf("5. Konversi meters -> yards\n");
    printf("6. Konversi yards -> meters\n");
    printf("7. Konversi meters -> km\n");
    printf("8. Konversi km -> meters\n");
    printf("9. Exit\n");
    printf("Pilih Konversi [1-9]: ");
    cin >> menuUkuran;

    switch (menuUkuran) {
        case 1:
            printf("Konversi meters -> feets\n");
            printf("Input meters : ");
            cin >> meters;

            feets = meters / 0.3048;

            printf("%g meters = %g feets\n", meters, feets);
            break;
        case 2:
            printf("Konversi feets -> meters\n");
            printf("Input feets : ");
            cin >> feets;

            meters = feets * 0.3048;

            printf("%g feets = %g meters\n", feets, meters);
            break;
        case 3:
            printf("Konversi meters -> inches\n");
            printf("Input meters : ");
            cin >> meters;

            inches = meters / 0.0254;

            printf("%g meters = %g inches\n", meters, inches);
            break;
        case 4:
            printf("Konversi inches -> meters\n");
            printf("Input inches : ");
            cin >> inches;

            meters = inches * 0.0254;
            
            printf("%g inches = %g meters\n", inches, meters);
            break;
        case 5:
            printf("Konversi meters -> yards\n");
            printf("Input meters : ");
            cin >> meters;

            yards = meters / 0.9144;

            printf("%g meters = %g yards\n", meters, yards);
            break;
        case 6:
            printf("Konversi yards -> meters\n");
            printf("Input yards : ");
            cin >> yards;

            meters = yards * 0.9144;

            printf("%g yards = %g meters\n", yards, meters);
            break;
        case 7:
            printf("Konversi meters -> km\n");
            printf("Input meters : ");
            cin >> meters;

            km = meters / 1000;

            printf("%g meters = %g km\n", meters, km);
            break;
        case 8:
            printf("Konversi km -> meters\n");
            printf("Input km : ");
            cin >> km;

            meters = km * 1000;

            printf("%g km = %g meters\n", km, meters);
            break;
        case 9:
            break;
        default:
            cout << INVLD << "Invalid" << endl;
            cout << INVLD << "Tip : input 1-9";
            break;
    }
}