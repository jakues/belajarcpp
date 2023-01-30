// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <bits/stdc++.h>

using namespace std;

struct Author {
    string Name;
    int Count;
    int Views;
};

int main() {
    // Declare struct
    struct Author a1 = {"John", 123, 1000};
    struct Author a2 = {"Rio", 100, 800};
    struct Author a3 = {"Yon", 134, 1122};

    vector<Author> v;

    // Insert use push_back
    v.push_back(a1);
    v.push_back(a2);
    v.push_back(a3);

    // Print it
    printf("Author Name  Counts  Views\n");
    for (auto& i: v) {
        printf("%5s %13d %5d\n", data(i.Name), i.Count, i.Views);
    }
}