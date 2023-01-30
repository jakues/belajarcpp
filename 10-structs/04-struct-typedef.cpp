// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

typedef struct {
    long long NIM;
    char Kelas;
} dataMhs;

int main() {
    //  Declare alias typedata
    typedef string mahasiswa;
    // Initialize
    mahasiswa mhs1{"Joni"};

    printf("Nama : %s\n", data(mhs1));

    dataMhs mhs = {
        2200018000,
        'Z'
    };

    printf("NIM  : %u\n", mhs.NIM);
    printf("Kelas: %c\n", mhs.Kelas);
}