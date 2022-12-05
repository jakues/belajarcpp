#include <iostream>
#include <math.h>

using namespace std;

int volume(int a) {
    return a*a*a;
}

int main() {
    int sisi;
    printf("Kalkulator Volume Kubus");
    printf("Input sisi : ");
    cin >> sisi;

    // not recomended
    // use user defined func
    printf("Volume kubus = %d\n", volume(sisi));
    // recomended
    // use math.h library
    printf("Volume kubus = %g\n", pow(sisi, 3));
}