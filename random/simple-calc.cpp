// Written by Rill @ jakues.github.io
#include <iostream>

using namespace std;

void Persegi() {
    float panjang;
    float lebar;
    
    cout << "Input panjang garis : ";
    cin >> panjang;
    cout << "Input lebar garis : ";
    cin >> lebar;

    cout << "Luas bangun tersebut adalah " << panjang*lebar;
}

void Segitiga() {
    float alas;
    float tinggi;

    cout << "Input alas : ";
    cin >> alas;
    cout << "Input tinggi : ";
    cin >> tinggi;

    cout << "Luas segitiga tersebut adalah " << alas*tinggi/2;
}

void Lingkaran() {
    float jarijari;

    cout << "Input jari-jari lingkaran : ";
    cin >> jarijari;

    cout << "Luas lingkaran tersebut adalah " << 22/7*jarijari*jarijari;
}

void displayMenu() {
    cout << "\n\n=================\n";
    cout << "Simple Calculator\n";
    cout << "=================\n";
    cout << "1. Perhitungan Luas Persegi atau Persegi Panjang\n";
    cout << "2. Perhitungan Luas Segitiga\n";
    cout << "3. Perhitungan Luas Lingkaran\n";
    cout << "4. Exit\n";
}

int main() {
    int pilihanMenu;
    for(;;) {
        displayMenu();
        cout << "\nPilih Kalkulator : ";
        cin >> pilihanMenu;
        switch (pilihanMenu)
        {
        case 1: Persegi(); break;
        case 2: Segitiga(); break;
        case 3: Lingkaran(); break;
        case 4: cout << "Thanks\n"; return 0; break;
        default: cout << "Invalid\n"; break;
        }
    }
    return 0;
}