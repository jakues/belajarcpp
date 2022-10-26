#include <iostream>

using namespace std;

int main() {
    const string OK=" [OK]";
    const string INVLD="[!] ";
    const string INFO="[i] ";
    const string QST="[?] ";
    const string CelcToKF= "Konversi Celcius -> Kelvin dan Fahrenheit";
    const string FahrToCK= "Konversi Fahrenheit -> Celcius dan Kelvin";
    const string KelToFC= "Konversi Kelvin -> Fahrenheit dan Celcius";
    float celcius, kelvin, fahrenheit;
    int menuSuhu;

    cout << "Program Konversi Suhu Celcius-Fahrenheit-Kelvin." << endl;
    cout << "1. " << CelcToKF << endl;
    cout << "2. " << FahrToCK << endl;
    cout << "3. " << KelToFC << endl;
    cout << "4. " << "Exit" << endl;
    cout << "Pilih Konversi : ";
    cin >> menuSuhu;

    switch (menuSuhu) {
        case 1:
            cout << CelcToKF << endl;
            cout << "Input Celcius : ";
            cin >> celcius;

            kelvin = celcius + 273.15;
            fahrenheit = (9. * celcius + 160) / 5.;

            printf("%g 'C = %g K = %g 'F", celcius, kelvin, fahrenheit);
            break;
        case 2:
            cout << FahrToCK << endl;
            cout << "Input Fahrenheit : ";
            cin >> fahrenheit;

            celcius = ((fahrenheit - 32) * (5./9.));
            kelvin = celcius + 273.15;

            printf("%g 'F = %g 'C = %g K", fahrenheit, celcius, kelvin);
            break;
        case 3:
            cout << KelToFC << endl;
            cout << "Input Kelvin : ";
            cin >> kelvin;

            celcius = kelvin - 273.15;
            fahrenheit = (celcius * (9./5.) + 32);
            printf("%g K = %g 'F = %g 'C", kelvin, fahrenheit, celcius);
            break;
        case 4:
            break;
        default:
            cout << INVLD << "Invalid" << endl;
            cout << INVLD << "Tip : input 1-4";
            break;
    }
}