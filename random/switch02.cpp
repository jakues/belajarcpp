#include <iostream>

using namespace std;

int main() {
    const string senin = "Hari Senin pukul 07:00-09:00\n";
    const string selasa = "Hari Selasa pukul 07:00-09:00\n";
    const string rabu = "Hari Rabu pukul 08:00-10:00\n";
    const string notifPraktik = "Anda memilih slot pada ";
    int slotPraktikum;

    printf("Program pemilihan slot praktikum\n");
    cout << "1. " << senin;
    cout << "2. " << selasa;
    cout << "3. " << rabu;
    printf("Silahkan pilih slot praktikum anda [input 1-3] : ");
    cin >> slotPraktikum;

    switch (slotPraktikum) {
        case 1:
            cout << notifPraktik << senin;
            break;
        case 2:
            cout << notifPraktik << selasa;
            break;
        case 3:
            cout << notifPraktik << rabu;
            break;
        default:
            cout << "Invalid ! Tip : Masukkan 1-3\n";
            break;
    }
}