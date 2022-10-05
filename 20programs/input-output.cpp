// Written by Rill @ jakues.github.io
#include <iostream>

using namespace std;

int main() {
    string namaDepan;
    string namaBelakang;

    cout << "Silahkan input nama depan anda : ";
    cin >> namaDepan;
    cout << "Silahkan input nama belakang anda : ";
    cin >> namaBelakang;

    cout << "[INFO] " "Data anda telah sukses disimpan di server\n";
    cout << "[INFO] " "Nama lengkap anda : " << namaDepan + " " + namaBelakang;
}
