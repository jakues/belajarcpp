// Written by Rill @ jakues.github.io
#include <iostream>
#define phi 22./7

using namespace std;

int main() {
    float jarijari;
    float luas;

    cout << "Silahkan masukkan jari-jari lingkaran : ";
    cin >> jarijari;

    luas=phi*jarijari*jarijari;
    cout << "Luas lingkaran tersebut : " << luas;
}