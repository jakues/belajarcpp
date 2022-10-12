#include <iostream>

using namespace std;

int main() {
    string varExample;

    for(;;) { // using for() coz to repeat the jobs without any reason xD
        cout << "Masukkan kata : ";
        getline(cin, varExample);
        cout << "Kata yang dimasukkan : " << varExample << endl;
    }
}