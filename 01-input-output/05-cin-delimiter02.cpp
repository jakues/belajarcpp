// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char date[25]; // set max array char = 25
    
    cout << "Masukkan tanggal dan hari : ";
    // set delimiter to 25
    // since cin.get() require delimiter
    cin.get(date, 25);
    
    cout<< date
        << endl;
}