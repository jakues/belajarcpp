// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // Input and output should be like :
    // Monday, 12-31-2022

    string date;

    // This code will print string on first word
    // cin method can't read 2 argument or more
    
    // cout << "===== cin method =====" << endl;
    // cout << "Input date : ";
    // cin >> date;
    // cout << date;

    // To prevent it u can use getline(cin, variableName)
    // Lets try
    cout << "===== getline method =====" << endl;
    cout << "Input date : ";
    getline(cin, date);
    cout << date;
}