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