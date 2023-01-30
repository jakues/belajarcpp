// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <bits/stdc++.h>

using namespace std;

string pali_s(string word) {
    string wordTemp = word;

    reverse(wordTemp.begin(), wordTemp.end());
    
    if (word == wordTemp) {
        return "true";
    } else {
        return "false";
    }
}

int main() {
    // User input
    // lol
    // Expected output
    // kata "lol" = palindrome
    string kata;

    printf("Input kata : ");
    getline(cin, kata);

    printf("Kata  \"%s\"  --> ", data(kata));
    if (pali_s(kata) == "true") {
        printf(" adalah Palindrome\n");
    } else {
        printf(" bukan Palindrome\n");
    }
}
