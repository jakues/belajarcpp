// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct distance {
    int feet;
    float inch;
}d1, d2, sum;

void inputData();

int main() {
    inputData();

    sum.feet = d1.feet + d2.feet;
    sum.inch = d2.inch + d2.inch;

    if (sum.inch > 12) {
        int extra = sum.inch / 12;
        sum.feet += extra;
        sum.inch -= (extra * 12);
    }

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}

void inputData() {
    printf("== Distance 1 ==\n");
    printf("Input feet : ");
    cin >> d1.feet;
    printf("Input inch : ");
    cin >> d1.inch;

    printf("== Distance 2 ==\n");
    printf("Input feet : ");
    cin >> d2.feet;
    printf("Input inch : ");
    cin >> d2.inch;
}