// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct time {
    int seconds;
    int minutes;
    int hours;
};

int main() {
    struct time t;
    int n;

    printf("Input seconds : ");
    cin>> n;

    t.hours=n/3600;
    t.minutes=(n%3600)/60;
    t.seconds=(n%60);

    printf("%d 's-->  %d hours %d minutes %d seconds\n", n, t.hours, t.minutes, t.seconds);
}