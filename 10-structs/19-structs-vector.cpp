#include <bits/stdc++.h>

using namespace std;

struct Author {
    string Name;
    int Count;
    int Views;
};

int main() {
    // Declare vector struct
    vector<Author> v = {
        {"John", 123, 1000},
        {"Rio", 100, 800},
        {"Yon", 134, 1122}
    };

    // Initialize use range constructor
    vector<Author> nv(v.begin(), v.end());

    // Print it
    printf("Author Name  Counts  Views\n");
    for (auto& i: v) {
        printf("%5s %13d %5d\n", data(i.Name), i.Count, i.Views);
    }
}