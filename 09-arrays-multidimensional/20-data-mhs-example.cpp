#include <iostream>
#include <iomanip>

using namespace std;

const int maxSize = 100;

void displayData(string isi[][maxSize], int count) {
    char space = ' ';
    string tabel[3] = {
        "NIM",
        "Nama",
        "Prodi"
    };

    for (int i=0; i < 3; i++) {
        printf("%s%5c", data(tabel[i]), space);
    }

    printf("\n");

    for (int i=0; i < count; i++) {
        for (int j=0; j < 3; j++) {
            printf("%s%5c", data(isi[i][j]), space);
        }
        printf("\n");
    }
}

int main() {
    int count = 3;

    string isi[count][maxSize] = {
        {"442", "John", "Kimia"},
        {"443", "Rio", "Fisika"},
        {"445", "Ley", "Matematika"}
    };

    displayData(isi, count);
}