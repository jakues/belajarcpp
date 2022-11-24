// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    const string garis=("---------------------------");
    __int64 NIM;
    string namaLengkap, fakultas;
    char kelas;
    bool statusMahasiswa;
    float IPK;

    cout << "Input NIM\t\t\t: ";
    cin >> NIM;
    cin.ignore();
    cout << "Input Nama Lengkap\t\t: ";
    getline(cin, namaLengkap);
    cout << "Input Fakultas\t\t\t: ";
    getline(cin, fakultas);
    cout << "Input kelas [A-J]\t\t: ";
    cin >> kelas;
    cout << "Anda mahasiswa ? [1=yes/0=no]\t: ";
    cin >> statusMahasiswa;
    cout << "Input IPK\t\t\t: ";
    cin >> IPK;

    cout << endl;
    cout << garis << garis << endl;
    cout << " NIM\t\t: " << NIM << endl;
    cout << " Nama Lengkap\t: " << namaLengkap << endl;
    cout << " Fakultas\t: " << fakultas << endl;
    cout << " Kelas\t\t: " << kelas << endl;
    cout << " Mahasiswa aktif\t: " << statusMahasiswa << endl;
    cout << " IPK\t\t: " << IPK << endl;
    cout << garis << garis << endl;
}