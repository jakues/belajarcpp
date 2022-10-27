// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    int score;
    bool valid = true;

    // this is if branch
    score = 8;

    if (score > 7 && valid) {
        printf("Nilai bagus\n");
    }

    // this is else branch
    score = 7;

    if (score > 7 && valid) {
        printf("Nilai bagus\n");
    } else {
        printf("Nilai kurang bagus\n");
    }

    // this is else if branch
    score = 7;

    if (score >= 9) {
        printf("Nilai Bagus\n");
    } else if (score >= 7) {
        printf("Nilai Cukup\n");
    } else if (score > 5) {
        printf("Nilai Kurang\n");
    } else {
        printf("Nilai Rendah\n");
    }
}