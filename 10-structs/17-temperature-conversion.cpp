#include <iostream>

using namespace std;

struct temp {
    float celcius;
    float kelvin;
    float fahrenheit;
};

int main() {
    temp t;

    printf("Input 'C\n");
    printf("   >> ");
    cin>> t.celcius;

    t.kelvin = t.celcius + 273.15;
    t.fahrenheit = (9. * t.celcius + 160) / 5.;

    printf("%.2f 'C = %.2f K = %.2f 'F\n", t.celcius, t.kelvin, t.fahrenheit);
}