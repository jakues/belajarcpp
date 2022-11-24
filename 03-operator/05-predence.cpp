// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    cout << 10 + 5 - 5 - 10 << " "; // 0
    cout << 10 + 5 - (5 - 10) << endl; // 20

	// Use parentheses to change the order of evaluation.
	// First, (1+5-3), then (10/2) will be calculated.
    cout << 1 + 5 - 3 * 10 / 2 << " "; // -9
    cout << (1 + 5 - 3) * 10 / 2 << endl; // 15
}