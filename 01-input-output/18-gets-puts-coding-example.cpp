// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    char nim[10], namaLengkap[50], alamat[50], fakultas[30], prodi[30], kelas[2];

    printf("Masukkan NIM\t\t: ");
    gets(nim);
    printf("Masukkan nama lengkap\t: ");
    gets(namaLengkap);
    printf("Masukkan tempat tinggal\t: ");
    gets(alamat);
    printf("Masukkan fakultas\t: ");
    gets(fakultas);
    printf("Masukkan program studi\t: ");
    gets(prodi);
    printf("Masukkan kelas\t\t: ");
    gets(kelas);

    system("cls");
    printf("NIM\t\t: %s\n", nim);
    printf("Nama Lengkap\t: %s\n", namaLengkap);
    printf("Tempat Tinggal\t: %s\n", alamat);
    printf("Fakultas\t: %s\n", fakultas);
    printf("Program Studi\t: %s\n", prodi);
    printf("Kelas\t\t: %s\n", kelas);
}