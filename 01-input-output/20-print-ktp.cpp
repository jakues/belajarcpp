// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    __int64 nik;
    string nama, tempatLahir, tanggalLahir, jenisKelamin, golDarah, alamat, rt, rw, kel, kec, agama, statusPerkawinan, pekerjaan, kewarganegaraan, masaBerlaku;
    // string NIK=to_string(nik); // convert int64 to string xD coz i want use getline instd cin

    cout << endl; cout << "---------------------------Pendataan KTP---------------------------"; cout << endl;
    cout << "Masukkan NIK\t\t\t: ";
    cin >> nik;
    cin.ignore();
    cout << "Masukkan Nama\t\t\t: ";
    getline(cin, nama);
    cout << "Masukkan tempat lahir\t\t: ";
    getline(cin, tempatLahir);
    cout << "Masukkan tanggal lahir\t\t: ";
    getline(cin, tanggalLahir);
    cout << "Masukkan jenis kelamin\t\t: ";
    getline(cin, jenisKelamin);
    cout << "Masukkan golongan darah\t\t: ";
    getline(cin, golDarah);
    cout << "Masukkan alamat\t\t\t: ";
    getline(cin, alamat);
    cout << "Masukkan RT\t\t\t: ";
    getline(cin, rt);
    cout << "Masukkan RW\t\t\t: ";
    getline(cin, rw);
    cout << "Masukkan Kel/Desa\t\t: ";
    getline(cin, kel);
    cout << "Masukkan Kecamatan\t\t: ";
    getline(cin, kec);
    cout << "Masukkan agama\t\t\t: ";
    getline(cin, agama);
    cout << "Masukkan status perkawinan\t: ";
    getline(cin, statusPerkawinan);
    cout << "Masukkan pekerjaan\t\t: ";
    getline(cin, pekerjaan);
    cout << "Masukkan kewarganegaraan\t: ";
    getline(cin, kewarganegaraan);
    cout << "Masukkan tanggal berakhir kartu\t: ";
    getline(cin, masaBerlaku);
    cout << "-------------------------------------------------------------------"; cout << endl;

    // print ktp
    system("pause"); system("cls");

    cout << "==================================================================="; cout << endl;
    cout << "NIK\t\t\t: " << nik;
    cout << endl;
    cout << "Nama\t\t\t: " << nama;
    cout << endl;
    cout << "Tempat/Tgl. Lahir\t: " << tempatLahir; cout << ", "; cout << tanggalLahir;
    cout << endl;
    cout << "Jenis Kelamin\t\t: " << jenisKelamin; cout << "\tGol. Darah : " << golDarah;
    cout << endl;
    cout << "Alamat\t\t\t: " << alamat;
    cout << endl;
    cout << "\tRT/RW\t\t: " << rt; cout << "/"; cout << rw;
    cout << endl;
    cout << "\tKel/Desa\t: " << kel;
    cout << endl;
    cout << "\tKecamatan\t: " << kec;
    cout << endl;
    cout << "Agama\t\t\t: " << agama;
    cout << endl;
    cout << "Status Perkawinan\t: " << statusPerkawinan;
    cout << endl;
    cout << "Pekerjaan\t\t: " << pekerjaan;
    cout << endl;
    cout << "Kewarganegaraan\t\t: " << kewarganegaraan;
    cout << endl;
    cout << "Berlaku Hingga\t\t: " << masaBerlaku;
    cout << endl;
    cout << "==================================================================="; cout << endl;
}