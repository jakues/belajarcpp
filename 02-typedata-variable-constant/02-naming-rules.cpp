#include <iostream>

using namespace std;

// variable naming rules

int main() {
    // contoh penulisan variabel yang benar
    int umurSaya = 20;
    int UmurKamu = 19;
    int UMUR_ADIK = 10;

    // penulisan dengan underscore didepan tetap diperbolehkan tetapi tidak dianjurkan
    int _umurKakak = 25;

    // unicode juga diperbolehkan
    int 速度 = 1;

    // print it
    cout << "Umur saya : " << umurSaya << " tahun" << endl;
    cout << "Umur kamu : " << UmurKamu << " tahun" << endl;
    cout << "Umur adik : " << UMUR_ADIK << " tahun"<< endl;
    cout << "Umur kakak : " << _umurKakak << " tahun" << endl;
    cout << "Contoh unikode : " << 速度 << endl;
}