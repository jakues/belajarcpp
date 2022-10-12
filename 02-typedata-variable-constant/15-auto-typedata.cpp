#include <iostream>

using namespace std;

int main() {
    // dalam c++ bisa menggunakan automatic typedata jadinya tidak perlu menuliskan type data xD
    // namun tidak dianjurkan
    auto beratBadan=55.876543;
    auto tinggiBadan=175.9892898;

    cout.precision(10); // untuk mengecek apakah type data benar" automatic xD
    cout << "Berat badan : " << beratBadan << " kg" << endl;
    cout << "Tinggi badan : " << tinggiBadan << " cm" << endl;
}