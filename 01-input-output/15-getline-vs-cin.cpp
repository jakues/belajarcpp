#include <iostream>

using namespace std;

int main() {
    string tanggal;

    // This code will print string on first word
    // cin method can't read 2 argument or more
    
    // cout << "=====cin method=====" << endl;
    // cout << "Masukkan hari dan tanggal" << endl;
    // cout << "Contoh : Minggu, 9 Oktober 2022" << endl;
    // cout << "-> ";
    // cin >> tanggal;
    // cout << tanggal;

    // To prevent it u can use getline(cin, variableName)
    // Lets try
    cout << "=====getline method=====" << endl;
    cout << "Masukkan hari dan tanggal" << endl;
    cout << "Contoh : Minggu, 9 Oktober 2022" << endl;
    cout << "-> ";
    getline(cin, tanggal);
    cout << tanggal;
}