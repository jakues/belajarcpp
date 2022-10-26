#include <iostream>

using namespace std;

int main() {
    const string senin          = "Hari Senin pukul 07:00-09:00\n";
    const string selasa         = "Hari Selasa pukul 07:00-09:00\n";
    const string rabu           = "Hari Rabu pukul 08:00-10:00\n";
    const string kamis          = "Hari Kamis pukul 08:00-10:00\n";
    const string jumat          = "Hari Jum'at pukul 08:00-10:00\n";
    const string notifPraktik   = "Anda memilih slot pada -> ";
    const string notifPlus      = "[+] ";
    const string notifInvalid   = "[!] ";
    int slotPraktikum;

    printf("Program pemilihan slot praktikum\n");
    cout << "1. " << senin;
    cout << "2. " << selasa;
    cout << "3. " << rabu;
    cout << "4. " << kamis;
    cout << "5. " << jumat;
    cout << notifPlus << "Silahkan pilih slot praktikum anda [input 1-5]" << endl;
    cout << "    >> ";
    cin >> slotPraktikum;

    switch (slotPraktikum) {
        case 1:
            cout << notifPlus << notifPraktik << senin;
            break;
        case 2:
            cout << notifPlus << notifPraktik << selasa;
            break;
        case 3:
            cout << notifPlus << notifPraktik << rabu;
            break;
        case 4:
            cout << notifPlus << notifPraktik << kamis;
            break;
        case 5:
            cout << notifPlus << notifPraktik << jumat;
            break;
        default:
            cout << notifInvalid << "Invalid" << endl;
            cout << notifInvalid << "Tip : Masukkan 1-5\n";
            break;
    }
}