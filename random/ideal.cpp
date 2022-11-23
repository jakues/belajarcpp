#include <iostream>

using namespace std;

int main() {
    const string infoBadan = "Berat badan dan tinggi anda ";
    float berat, tinggi;
    char ideal;
    int angkaAjaib = 110.;

    printf("Program untuk mengetahui apakah sesorang itu termauk kurus, ideal atau gemuk\n");
    printf("Masukkan berat badan : ");
    cin >> berat;
    printf("Masukkan tinggi badan : ");
    cin >> tinggi;

    if (berat == (tinggi - angkaAjaib)) {
        cout << infoBadan << "ideal" << endl;
    } else if (berat < (tinggi - angkaAjaib)) {
        cout << infoBadan << "kurus" << endl;
    } else if (berat > (tinggi - angkaAjaib)) {
        cout << infoBadan << "gemuk" << endl;
    }
}