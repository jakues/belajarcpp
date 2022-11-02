#include <iostream>

using namespace std;

int main() {
    int i, number;
    bool isPrime = true;

    printf("Program Check Bilangan Prima/Bukan\n");
    printf("Input bilangan : ");
    cin >> number;

    if (number == 0 || number ==  1) {
        isPrime = false;
    }

    for (i = 2; i <= (number / 2); i++) {
        if ((number % i)== 0) {
            isPrime = false;
        }
    }

    string hasil = isPrime ? " --> bilangan prima" : " --> bukan bilangan prima";
    cout << number << hasil << endl;

    // alternate
    // if (isPrime) {
    //     printf("%d --> bilangan prima", number);
    // } else {
    //     printf("%d --> bukan bilangan prima", number);
    // }
}