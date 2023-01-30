// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    string name[][3] = {
        {"First Name", "Last Name", "Nickname"},
		{"Albert", "Einstein", "emc2"},
		{"Isaac", "Newton", "apple"},
		{"Stephen", "Hawking", "blackhole"},
		{"Marie", "Curie", "radium"},
		{"Charles", "Darwin", "fittest"}
    };

    for (int i=0; i < 5; i++) {
        for (int j=0; j < 3; j++) {
            printf("%-15s", data(name[i][j]));
        }
        printf("\n");
        if (i == 0) {
            for (int k=0; k < 50; k++) {
                printf("=");
                if (k == 50-1) {
                    printf("\n");
                }
            }
        }
    }
}