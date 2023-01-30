// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a = 2, b = 3;
    printf("Menghitung pangkat dengan menulis beberapa kali variabel.\n");
    printf("%d pangkat %d = %d\t--> a*a*a\n", a, b, a*a*a);
    printf("Menghitung pangkat dengan fungsi math.pow.\n");
    printf("%d pangkat %d = %g\t--> pow(a, b)\n", a, b, pow(a, b));
}