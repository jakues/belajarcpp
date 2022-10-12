#include <iostream>

using namespace std;

// publik/global variabel 
// deklarasi variable diluar func main dapat dipanggil didalam function mana saja
string namaLengkap="Joko Widodo";

int main() {
    // local variable
    // deklarasi variable didalam function hanya bisa dipanggil didalam function itu
    int umur=61;

    cout << "Nama : " << namaLengkap << endl;
    cout << "Umur : " << umur;
}