// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

void welcomeMsg(string msg = "user") { // default value use =
    printf("Selamat datang %s !\n", data(msg));
}

int main() {
    welcomeMsg("Alexander");
    welcomeMsg("Arnold");
    welcomeMsg();
}