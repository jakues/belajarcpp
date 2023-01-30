// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct hariPraktik {
    string senin          = "Hari Senin pukul 07:00-09:00\n";
    string selasa         = "Hari Selasa pukul 07:00-09:00\n";
    string rabu           = "Hari Rabu pukul 08:00-10:00\n";
    string kamis          = "Hari Kamis pukul 08:00-10:00\n";
    string jumat          = "Hari Jum'at pukul 08:00-10:00\n";
};

struct notifPraktik {
    string notifPraktik   = "Anda memilih slot pada -> ";
    string notifPlus      = "[+] ";
    string notifInvalid   = "[!] ";
};

int main() {
    int n;

    struct slotPraktik {
        struct hariPraktik day;
        struct notifPraktik notif;
    };

    slotPraktik slot;

    string arrDay[5] = {
        "senin",
        "selasa",
        "rabu",
        "kamis",
        "jumat"
    };

    printf("Pemilihan slot praktikum\n");
    for (int i=1; i <= 5; i++) {
        printf("#%d.  %s\n", i, data(arrDay[i-1]));
    }
    printf("    >> ");
    cin >> n;

    switch (n) {
        case 1:
            printf("%s%s%s", data(slot.notif.notifPlus), data(slot.notif.notifPraktik), data(slot.day.senin));
            break;
        case 2:
            printf("%s%s%s", data(slot.notif.notifPlus), data(slot.notif.notifPraktik), data(slot.day.selasa));
            break;
        case 3:
            printf("%s%s%s", data(slot.notif.notifPlus), data(slot.notif.notifPraktik), data(slot.day.rabu));
            break;
        case 4:
            printf("%s%s%s", data(slot.notif.notifPlus), data(slot.notif.notifPraktik), data(slot.day.kamis));
            break;
        case 5:
            printf("%s%s%s", data(slot.notif.notifPlus), data(slot.notif.notifPraktik), data(slot.day.jumat));
            break;
        default:
            printf("%sInvalid\n", data(slot.notif.notifInvalid));
            break;
    }
}