// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    float celcius, fahrenheit, kelvin;
    int min, max, pilihanMenu;
    char pilihan;
    const string textMin = "Masukkan batas bawah ";
    const string textMax = "Masukkan batas atas ";

    do {
        printf("Pilihan Menu Kalkulator\n");
        printf("1. C --> F --> K\n");
        printf("2. F --> K --> C\n");
        printf("3. K --> C --> F\n");
        printf("4. Exit\n");
        printf("pilih menu : ");
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:                
                cout << textMin << "Celcius : ";
                cin >> min;
                cout << textMax << "Celcius : ";
                cin >> max;
                printf("C --> F --> K\n");
                for (int i = min; i <= max; i++) {
                    celcius = i;
                    fahrenheit = (9. * i + 160) / 5.;
                    kelvin = i + 273.15;
                    printf("%0.2f --> %0.2f --> %0.2f\n", celcius, fahrenheit, kelvin);
                }
                break;
            case 2:
                cout << textMin << "Fahrenheit : ";
                cin >> min;
                cout << textMax << "Fahrenheit : ";
                cin >> max;
                printf("F --> K --> C\n");
                for (int i = min; i <= max; i++) {
                    fahrenheit = i;
                    celcius = ((i - 32) * (5./9.));
                    kelvin = i + 273.15;
                    printf("%0.2f --> %0.2f --> %0.2f\n", fahrenheit, kelvin, celcius);
                }
                break;
            case 3:
                cout << textMin << "Kelvin : ";
                cin >> min;
                cout << textMax << "Kelvin : ";
                cin >> max;
                printf("K --> C --> F\n");
                for (int i = min; i <= max; i++) {
                    kelvin = i;
                    celcius = i - 273.15;
                    fahrenheit = (i * (9./5.) + 32);
                    printf("%0.2f --> %0.2f --> %0.2f\n", kelvin, celcius, fahrenheit);
                }
                break;
        }
        printf("afh lanjut [y/n] ?\n");
        printf("--> ");
        cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
}