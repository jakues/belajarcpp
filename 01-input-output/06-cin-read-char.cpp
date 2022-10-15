#include <iostream>

using namespace std;

int main() {
    char nama[31];

    cout << "Masukkan nama lengkap :  ";
    cin.read(nama, 10);
    cout << "Peringatan!!!" << endl;
    cout << "Nama akan dipangkas 10 huruf pertama" << endl;
    cout << "Nama seteleah dipotong :" << nama;
}