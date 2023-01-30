// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void biodata(string nama, int umur, string negara) {
    printf("Nama : %s\nUmur : %i\nNegara : %s\n\n", data(nama), umur, data(negara));
}

int main() {
    biodata("Manto", 20, "ID");
    biodata("Slamet", 19, "SG");
}