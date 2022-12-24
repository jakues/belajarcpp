#include <iostream>
#ifdef _WIN32
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;

struct person {
    string firstName, lastName;
};

struct mahasiswa {
    struct person Name; // nested struct here
    long long int NIM;
    char kelas;
    string prodi;
};

int main() {
    mahasiswa identitasMhs;

    printf("== Input Data Mahasiswa ==\n");
    printf("Input first name : ");
    getline(cin, identitasMhs.Name.firstName);
    printf("Input last name : ");
    getline(cin, identitasMhs.Name.lastName);
    printf("Input NIM : ");
    cin >> identitasMhs.NIM;
    printf("Input kelas : ");
    cin >> identitasMhs.kelas;
    cin.ignore();
    printf("Input prodi : ");
    getline(cin, identitasMhs.prodi);

    printf("Data berhasil disimpan...\n");
    system("pause");
    system("cls");

    printf(" === Data Mahasiswa === \n");
    printf("First Name\t: %s\n", data(identitasMhs.Name.firstName));
    printf("Last Name\t: %s\n", data(identitasMhs.Name.lastName));
    printf("Full Name\t: %s %s\n", data(identitasMhs.Name.firstName), data(identitasMhs.Name.lastName));
    printf("NIM\t\t: %u\n", identitasMhs.NIM);
    printf("Kelas\t\t: %c\n", identitasMhs.kelas);
    printf("Prodi\t\t: %s\n", data(identitasMhs.prodi));

}