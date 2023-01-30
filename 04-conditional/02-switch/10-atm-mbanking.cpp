// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
    const string pin            = "123456";
    const string pass           = "rill123";
    const string errPass        = "Password/PIN salah";
	const string acessGranted   = "Login berhasil";
    const string balance        = "Cek Saldo";
    const string deposit        = "Deposit";
    const string withdraw       = "Withdrawal";
    const string transfer       = "Transfer";
    const string invalidBalance = "Saldo tidak cukup";
    __int64 balanceAmount = 500000; // input saldo disini
    __int64 rekTujuan;
    int menuPilihan, balanceTemp;
    string p, pinInput;

    cout << "Program Aplikasi M-Banking" << endl;
    cout << "Masukkan password app : ";
    cin >> p;
    if (p != pass) {
        cout << errPass << endl;
    } else {
        cout << acessGranted << endl;
        Sleep(2000); system("cls");
        cout << "====Bank ABC====" << endl;
        cout << "1. " << balance << endl;
        cout << "2. " << deposit << endl;
        cout << "3. " << withdraw << endl;
        cout << "4. " << transfer << endl;
        cout << "5. Exit" << endl;
        cout << "Pilih menu : ";
        cin >> menuPilihan;
        system("cls");

        switch (menuPilihan) {
            case 1:
                cout << "Masukkan pin : ";
                cin >> pinInput;
                system("cls");
                if (pinInput != pin) {
                    cout << errPass << endl;
                } else {
                    cout << "Check Account Balance" << endl;
                    cout << "Saldo = " << balanceAmount << endl;
                }
                break;
            case 2:
                cout << "Masukkan pin : ";
                cin >> pinInput;
                system("cls");
                if (pinInput != pin) {
                    cout << errPass << endl;
                } else {
                    cout << "Deposit Balance" << endl;
                    cout << "Masukkan Jumlah Uang : ";
                    cin >> balanceTemp;
                    system("cls"); Sleep(2000);
                    cout << "Deposit berhasil" << endl;
                    cout << "Saldo sebelum deposit = " << balanceAmount << endl;
                    cout << "Saldo setelah deposit = " << balanceAmount+balanceTemp << endl;
                }
                break;
            case 3:
                cout << "Masukkan pin : ";
                cin >> pinInput;
                system("cls");
                if (pinInput != pin) {
                    cout << errPass << endl;
                } else {
                    cout << "Withdrawal Balance" << endl;
                    cout << "Masukkan Jumlah Uang : ";
                    cin >> balanceTemp;
                    if (balanceAmount < 50000) {
                        cout << invalidBalance << endl;
                    } else {
                        if (balanceTemp > balanceAmount) {
                            cout << invalidBalance << endl;
                        } else {
                            system("cls"); Sleep(2000);
                            cout << "Withdrawal Berhasil" << endl;
                            cout << "Silahkan Ambil Uang dan Kartu" << endl;
                        }
                    }
                }
                break;
            case 4:
                cout << "Masukkan pin : ";
                cin >> pinInput;
                system("cls");
                if (pinInput != pin) {
                    cout << errPass << endl;
                } else {
                cout << "Transfer Balance" << endl;
                    if (balanceAmount < 50000) {
                        cout << invalidBalance << endl;
                    } else {
                        cout << "Masukkan Nomor Rekening : ";
                        cin >> rekTujuan;
                        cout << "Masukkan Jumlah Uang : ";
                        cin >> balanceTemp;
                        if (balanceTemp > balanceAmount) {
                            cout << invalidBalance << endl;
                        } else {
                            system("cls"); Sleep(2000);
                            cout << "Berhasil Transfer ke " << rekTujuan << endl;
                            cout << "Saldo anda sisa " << balanceAmount-balanceTemp << endl;
                        }
                    }
                }
                break;
            case 5:
                break;
            default:
                cout << "Invalid" << endl;
                break;
        }
    }
    
}