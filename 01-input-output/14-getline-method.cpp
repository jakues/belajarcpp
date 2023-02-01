// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    string word;

    printf("Input word : ");
    getline(cin, word);

    printf(
        "Word : %s\n",
        word.c_str()
    );
}