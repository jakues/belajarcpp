// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    string varExample;

    for(;;) { // using for() coz to repeat the jobs without any reason xD
        cout << "Masukkan kata : ";
        getline(cin, varExample);
        cout << "Kata yang dimasukkan : " << varExample << endl;
    }
}