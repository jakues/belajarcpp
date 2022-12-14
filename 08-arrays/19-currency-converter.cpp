#include <iostream>
#include <array>

using namespace std;

int main() {
    // This program display 
    // currency exchange ratios against USD.
    // first declare array
    float jumlah;
    array <string, 3> currency = {
        "EUR",
        "GBP",
        "IDR"
    };

    // ratio gets based on Tue Dec 13 19:28:20 UTC 2022
    array <float, 3> rates = {
        0.94, // EUR
        0.81, // GBP
        15595.76 // IDR
    };

    // user input here
    printf("Input USD : ");
    cin >> jumlah;

    // print it
    for (int i=0; i < 3; i++) {
        printf("%.2f USD is %.2f %s\n", jumlah, rates[i]*jumlah, data(currency[i]));
    }
}