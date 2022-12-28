#include <iostream>
#include <math.h>

using namespace std;

void func(int n, int *square, double *sq) {
    *square = n * n;
    *sq = sqrt(n);
}

int main() {
    // User input
    int n;
    printf("Input n : ");
    cin >> n;

    // Declare square as new typedata
    int *square = new int;
    double *sq = new double;

    // Assign 
    func(n, square, sq);
    printf("n value : %-5d sqrt : %d --> %-5g", n, *square, *sq);
}