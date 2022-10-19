#include <iostream>

using namespace std;

int main() {
    bool angka;

    angka = 2 > 1; // true = 1
    cout << "| 2 >  1 | " << angka << " |" << endl;

    angka = 2 < 1; // false = 0
    cout << "| 2 <  1 | " << angka << " |" << endl;

    angka = 2 == 1; // false = 0
    cout << "| 2 == 1 | " << angka << " |" << endl;

    angka = 2 != 1; // false = 0
    cout << "| 2 != 1 | " << angka << " |" << endl;

    angka = 2 >= 1; // true = 1
    cout << "| 2 >= 1 | " << angka << " |" << endl;

    angka = 2 <= 1; // false = 0
    cout << "| 2 >= 1 | " << angka << " |" << endl; 
}