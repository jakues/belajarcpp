#include <iostream>

using namespace std;

int main() {
    int umur;

    printf("This program use nested if.\n");
    printf("Masukkan umur : ");
    cin >> umur;

    if (umur <= 60) {
        if (umur < 12) {
            if (umur <= 3) {
                cout << "Anda batita" << endl;
                cout << "Minum vitamin 1x sehari." << endl;
            } else if (umur <= 5) {
                cout << "Anda balita" << endl;
                cout << "Minum vitamin 1x sehari." << endl;
            } else {
                cout << "Anda anak-anak" << endl;
                cout << "Minum vitamin 2x sehari." << endl;
            }
        } else if (umur >= 12) {
            if (umur <= 17) {
                cout << "Anda remaja" << endl;
                cout << "Minum vitamin 2x sehari." << endl;
            } else {
                cout << "Anda dewasa" << endl;
                cout << "Minum vitamin 3x sehari." << endl;
            }
        }
    } else {
        cout << "Yo! Grandpa/Grandma xD" << endl;
        cout << "Vitamin tidak untuk umur 60 atau lebih." << endl;
    }
}