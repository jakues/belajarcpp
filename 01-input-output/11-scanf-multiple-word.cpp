#include <iostream>

using namespace std;

int main() {
    char fakultas[50];

    printf("Masukkan fakultas anda : ");
    scanf("%[^\n]", fakultas); // [^\n] ^ merupakan negasi dari line feed itu agar variabel inputan dengan spasi dapat terbaca
    printf("Fakultas anda : %s", fakultas);
}