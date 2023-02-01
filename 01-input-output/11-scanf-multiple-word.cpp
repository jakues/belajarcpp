// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    char word[50];

    printf("Input 2 word or more : ");
    // [^\n] is line feed negation
    // to read 2 word or more var char type data
    scanf("%[^\n]", word);

    printf("Word : %s\n", word);
}