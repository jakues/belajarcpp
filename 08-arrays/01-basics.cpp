#include <iostream>

using namespace std;

int main() {
    // bad
    // int age[5];
    // age[0]=10;
    // age[1]=20;
    // age[2]=30;
    // age[3]=40;
    // age[4]=50;
    
    // better
    int age[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Address : %#p has value : %d\n", &age[i], age[i]);
    }
}