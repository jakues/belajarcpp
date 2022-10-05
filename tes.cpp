#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int64_t NIK;
    string nama;
    string TTL;
    string jenisKelamin;
    string RT;

    string nik= to_string(NIK);

    cout << "Input NIK : ";
    getline(cin, nik);

    cout << "Input nama : ";
    getline(cin, nama);

    cout << "Input TTL : ";
    getline(cin, TTL);

    cout << "Input jenis kelamin : ";
    getline(cin, jenisKelamin);

    cout << "Input RT/RW : ";
    getline(cin, RT);

    cout << "NIK\t\t\t: " << NIK;
    cout << endl;
    cout << "Nama\t\t\t: " << nama;
    cout << endl;
    cout << "Tempat Tgl. Lahir\t: " << TTL;
    cout << endl;
    cout << "Jenis Kelamin\t\t: " << jenisKelamin;
    cout << endl;
    cout << "\tRT/RW\t\t: " << RT;
    cout << endl;
}