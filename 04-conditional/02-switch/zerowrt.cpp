#include <iostream>

using namespace std;

int main() {
    const string OK=" [OK]";
    const string INVLD="[!] ";
    const string INFO="[i] ";
    const string QST="[?] ";
    const string INPT="    >> ";
    const string LINE="=========================================";
    const string versionLatest = "22.03.0 -- Latest stable release";
    const string versionOld = "21.02.3 -- Old stable release";
    const string versionArchive = "19.07.10 -- Old stable archive";
    const string MODEL_1="Pi 1 (32 bit) compatible on pi 0,0w,1B,1B+";
	const string MODEL_2="Pi 2 (32 bit) compatible on pi 2B,2B+,3B,3B+,CM3,zero2,4B,400,cm4";
	const string MODEL_3="Pi 3 (64 bit) compatible on pi 2Brev2,3B,3B+,CM3,zero2";
	const string MODEL_4="Pi 4 (64 bit) compatible on pi 4B,400,CM4";
    int version, model;
    
    // dialog version
    cout << LINE << endl;
    cout << "| 1. | " << versionLatest << "\t|" << endl;
    cout << "| 2. | " << versionOld << "\t|" << endl;
    cout << "| 3. | " << versionArchive << "\t|" << endl;
    cout << LINE << endl;
    cout << QST << "Pilih Versi Openwrt [1-3]" << endl;
    cout << INPT;
    cin >> version;

    switch (version) {
        case 1:
            cout << INFO << versionLatest << OK;
            break;
        case 2:
            cout << INFO << versionOld << OK;
            break;
        case 3:
            cout << INFO << versionArchive << OK;
            break;
        default:
            cout << INVLD << "Invalid" << endl;
            cout << INVLD << "Tip : input 1-3";
            break;
    }
    
    // dialog model
    cout << endl;
    cout << LINE << LINE << endl;
    cout << "| 1. | " << MODEL_1 << "\t\t\t\t |" << endl;
    cout << "| 2. | " << MODEL_2 << "\t |" << endl;
    cout << "| 3. | " << MODEL_3 << "\t\t\t |" << endl;
    cout << "| 4. | " << MODEL_4 << "\t\t\t\t |" << endl;
    cout << LINE << LINE << endl;
    cout << QST << "Pilih Raspberry Pi Model [1-4]" << endl;
    cout << INPT;
    cin >> model;

    switch (model) {
        case 1:
            cout << INFO << MODEL_1 << OK;
            break;
        case 2:
            cout << INFO << MODEL_2 << OK;
            break;
        case 3:
            cout << INFO << MODEL_3 << OK;
            break;
        case 4:
            cout << INFO << MODEL_4 << OK;
            break;
        default:
            cout << INVLD << "Invalid" << endl;
            cout << INVLD << "Tip : input 1-4";
            break;
    }
}