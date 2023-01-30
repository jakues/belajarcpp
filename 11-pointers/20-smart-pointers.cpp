// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
//reference https://en.cppreference.com/w/cpp/header/memory
#include <memory>

using namespace std;

int main() {
    // Declare unique pointer
    unique_ptr<int>Ptr1 = make_unique<int>(3);
    unique_ptr<float>Ptr2 = make_unique<float>(3.14);
    unique_ptr<char>Ptr3 = make_unique<char>('P');

    printf("Ptr1 : %-16d address : %-#16p\n", *Ptr1, &Ptr1);
	printf("Ptr2 : %-16.2f address : %-#16p\n", *Ptr2, &Ptr2);
	printf("Ptr3 : %-16c address : %-#16p\n", *Ptr3, &Ptr3);

    // Moving unique pointer
    unique_ptr<int>movePtr = move(Ptr1);
    printf("\nPtr1 : %-16d address : %-#16p\n", *movePtr, &movePtr);
    // Ptr1 will not exist
    // coz ady move to movePtr
    // try uncomment code below
    // printf("\nPtr1 : %-16d address : %-#16p\n", *Ptr1, &Ptr1);
}