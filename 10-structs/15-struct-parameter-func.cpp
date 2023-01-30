// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#ifdef _WIN32
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;

struct person {
    string citizen;
    int age;
};

void displayPerson(struct person p) {
    printf("Kewarganegaran : %s\n", data(p.citizen));
    printf("Usia : %d\n", p.age);
}

int main() {
    struct person p;
    
    printf("Input kewarganegaraan : ");
    getline(cin, p.citizen);
    printf("Input usia : ");
    cin>> p.age;
    cin.ignore();

    system("cls");
    displayPerson(p);
}