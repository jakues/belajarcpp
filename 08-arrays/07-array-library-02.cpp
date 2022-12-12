#include <iostream>
#include <array>

using namespace std;

int main() {
    // declare array with maxsize 5
    // then fill it to 3 elements
    // we know that 1 is first element and 3 is last element
    array <int, 5> num = {1, 2, 3};

    // some useful array func
    // for iterators array :
    // use num.begin() instead of use num[0] also on end()
    // for elements array :
    // use num.front() instead of use num[0]  also on back()

    printf("first iterators : %#p     has value --> %d\n", num.begin(), num.front());
    printf("last iterators  : %#p     has value --> %d\n", num.end(), num.back());

    // at() func to access specified elements
    printf("Value of num[2] --> %d\n", num.at(2));

    // max_size() func to show max size of array
    printf("Max size num --> %d", num.max_size());
}