// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

// main() is main program we use
int main() {
    // n is variable to store data type
    // int is integer data type
    int n;

    // c++ need namespace
    // std::
    std::cout << "Input numbers : ";
    std::cin >> n;

    std::cout << std::endl;
    std::cout   << "Numbers : "
                << n
                << std::endl;
}