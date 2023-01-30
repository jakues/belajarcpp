// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <array>
#include <string.h>

using namespace std;

int main() {
    // This program andomly select 
    // and print one of the mood messages
    string nama;
    array <string, 6> mood = {
        "happy :)", "good", "awesome :>",
		"sad :(", "bad", "terrible :<",
    };

    // user input
    printf("Input nama : ");
    getline(cin, nama);

    // invalid case
    if (nama.length() != 1) {
		printf("[your name]");
		return 0;
	}

    // initialize srand() with current time as seed for random generator
    srand(time(0));
    int n = rand() % 5;

    // print it
    printf("%s feels %s\n", data(nama), data(mood[n]));
}