// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int i, j;
    int a = 30, b = 7;
    int num;
    
    for (i = 1; i <= 5; i++) {
        // setiap line print 7 hari tanggal
        if ( i == 1) {
            for (j = 1; j <= a-(a-b*i); j++) {
                num = a-(a-b*i); // num = store temp data here
                printf("%3i", j);
            }
        } else if (i == 2) {
            for (j = num+1; j <= a-(a-b*i); j++) {
                num = a-(a-b*i);
                printf("%3i", j);
            }
        } else if (i == 3) {
            for (j = num+1; j <= a-(a-b*i); j++) {
                num = a-(a-b*i);
                printf("%3i", j);
            }
        } else if (i == 4) {
            for (j = num+1; j <= a-(a-b*i); j++) {
                num = a-(a-b*i);
                printf("%3i", j);
            }
        } else {
            for (j = num+1; j <= a; j++) {
                num = a;
                printf("%3i", j);
            }
        }
        printf("\n");
    }
}