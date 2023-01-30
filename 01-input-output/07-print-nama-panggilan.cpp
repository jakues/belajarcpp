// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char nama[15];

    cout << "Program untuk memanggil nama julukan" << endl;
    cout << "Masukkan nama depan atau belakang : ";
    cin.read(nama, 5); // biasanya saya memanggil orang 3 huruf depan dari nama depannya haha (x+2)
    cout << "Hai " << nama << endl;
    cout << "Apa kabar " << nama;
}