// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char nick[7];

    cout << "Input ur nickname" << endl;
    cout << "--> ";
    cin.getline(nick, 7);


    cout<< "Nickname: "
        << nick
        << endl;
}