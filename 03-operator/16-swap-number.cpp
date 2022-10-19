#include <iostream>

using namespace std;

int main() {
    float angka1, angka2;

    printf("Pertukaran Angka Dengan Operator\n");
    printf("Masukkan angka pertama\t: ");
    cin >> angka1;
    printf("Masukkan angka kedua\t: ");
    cin >> angka2;
    //system("cls");
    printf("Angka sebelum ditukar : %g || %g\n", angka1, angka2);

    angka1+=angka2;
    angka2=angka1-angka2;
    angka1-=angka2;

    printf("Angka setelah ditukar : %g || %g", angka1, angka2);
}