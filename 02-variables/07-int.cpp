#include <iostream>

using namespace std;

int main() {
    int bilangan;
    __int64 NIM; // 10 digit tidak bisa menggunakan int/int8 maka digunakan int64

    cout << "Input angka 1-100 : ";
    cin >> bilangan;
    cout << "Input NIM : ";
    cin >> NIM;

    // print it
    cout << endl;
    cout << "Angka anda : " << bilangan << endl;
    cout << "NIM kamu : " << NIM << endl;
}