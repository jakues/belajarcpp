#include <iostream>
#include <array> // define array standard library

using namespace std;

// Read reference : https://en.cppreference.com/w/cpp/container/array

int main() {
    // using doible bracket not recomended
    array<int, 3> num{ {1, 2, 3} };
    // use = instead of dourble bracket
    array <string, 2> color = {"black", "white"};

    // you can also redeclare array elements
    // try uncomment below
    //num[0] = num[1];

    printf("Numbers          : %d %d %d\n", num[0], num[1], num[2]);
    printf("Available colors : %s or %s", data(color[0]), data(color[1]));
}