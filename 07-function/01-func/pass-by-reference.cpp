// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void persegi(int &a);

int main() {
    // this is pass by reference (var a as reference)
    int sisi = 5;
    persegi(sisi);
    // this pass by value wont work
    //persegi(4);
}

void persegi(int &a) {
    printf("Luas persegi --> %d", a*a);
}