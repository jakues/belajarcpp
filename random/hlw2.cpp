#include <iostream>

using namespace std;

int main() {
    int menu, detik, menit, jam, hari, waktuTemp, waktu = 1;
    string msgMenu = "Konversi waktu ";

    menuLabel:
    system("cls");
    printf("Program %s\n", data(msgMenu));
    printf("1. %s detik ke hari-jam-menit-detik.\n", data(msgMenu));
    printf("2. %s menit ke jam-menit-detik.\n", data(msgMenu));
    printf("3. %sjam ke detik.\n", data(msgMenu));
    printf("4. Exit\n");
    printf("Masukkan pilihan [1-4] : ");
    cin >> menu;

    switch (menu) {
        case 1:
            printf("Input detik : ");
            cin >> waktu;

            waktuTemp=waktu;
            hari=waktu/(24*3600);
            waktu=waktu%(24*3600);
            jam=waktu/3600;
            waktu=waktu%3600;
            menit=waktu/60;
            waktu=waktu%60;
            detik=waktu;

            printf("%d detik --> %d hari %d jam %d menit %d detik.", waktuTemp, hari, jam, menit, detik);
            break;
        case 2:
            printf("Input menit : ");
            cin >> waktu;

            waktuTemp=waktu;
            hari=waktu/(24*60);
            waktu=waktu%(24*60);
            jam=waktu/60;
            waktu=waktu%60;
            menit=waktu;
            waktu=waktu%60;
            detik=waktu/60.;

            printf("%d menit --> %d hari %d jam %d menit %d detik.", waktuTemp, hari, jam, menit, detik);
            break;
        case 3:
            printf("Input jam : ");
            cin >> waktu;

            waktuTemp=waktu;
            hari=waktu/24;
            waktu=waktu%24;
            jam=waktu;
            waktu=waktu%60;
            menit=waktu/60;
            waktu=waktu%60;
            detik=waktu/60;

            printf("%d jam --> %d hari %d jam %d menit %d detik", waktuTemp, hari, jam, menit, detik);

            break;
        case 4:
            break;
        default:
            goto menuLabel;
            break;
    }
}