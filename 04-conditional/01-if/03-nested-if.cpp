// Copyright © 2022 Rill
// My progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/
// Follow me on twitter : https://twitter.com/rill_blastmith

#include<iostream>

using namespace std;

int main() {
    const string replyButton = "  >> ";
    const string prompt = " [y/n]";
    int angka;
    char jawaban;

    cout << "Pilih angka 1-8 : ";
    cin >> angka;

    // here we go again
    cout << "Apakah angka kurang dari 5 ?" << prompt << endl;
    cout << replyButton;
    cin >> jawaban;
    if (toupper(jawaban) == 'Y') { // 1,2,3,4
        cout << "Apakah angka kurang dari 3 ?" << prompt << endl;
        cout << replyButton;
        cin >> jawaban;
        if (toupper(jawaban) == 'Y') { // 1,2
            cout << "Apakah angka kurang dari 2 ?" << prompt << endl;
            cout << replyButton;
            cin >> jawaban;
            if (toupper(jawaban) == 'Y') { // 1
                cout << "Angka = 1";
            } else { // 2
                cout << "Angka = 2";
            }
        } else { // 3,4
            cout << "Apakah angka kurang dari 4 ?" << prompt << endl;
            cout << replyButton;
            cin >> jawaban;
            if (toupper(jawaban) == 'Y') { // 3
                cout << "Angka = 3";
            } else { // 4
                cout << "Angka = 4";
            }
        }
    } else { // 5,6,7,8
        cout << "Apakah angka kurang dari 8 ?" << prompt << endl;
        cout << replyButton;
        cin >> jawaban;
        if (toupper(jawaban) == 'Y') { // 5,6,7,8
            cout << "Apakah angka kurang dari 7 ?" << prompt << endl;
            cout << replyButton;
            cin >> jawaban;
            if (toupper(jawaban) == 'Y') { // 5,6
                cout << "Apakah angka kurang dari 6 ?" << prompt << endl;
                cout << replyButton;
                cin >> jawaban;
                if (toupper(jawaban) == 'Y') { // 5
                    cout << "Angka = 5";
                } else { // 6
                    cout << "Angka = 6";
                }
            } else { // 7,8
                cout << "Apakah angka kurang dari 8 ?" << prompt << endl;
                cout << replyButton;
                cin >> jawaban;
                if (toupper(jawaban) == 'Y') { //7
                    cout << "Angka = 7";
                } else { // 8
                    cout << "Angka = 8";
                }
            }
        }
    }
}