// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream> // std::cout
#include <fstream>  // std::fstream
#include <iomanip>  // std::setw
#include <string>   // std::string
#include <vector>   // std::vector
#include <cerrno>
#ifdef _WIN32       // case windows OS
#include <windows.system.h>
#else
#include <unistd.h>
#endif

using namespace std;

struct Record {
    int tanggal;
    string id;
    float qty;
    float harga;
    float total;
};

struct Notif {
    string notifInfo    = "[i]";
    string notifInvalid = "[!]";
    string fileNil      = "File \"data.txt\" tidak ada";
} msg;

int counter();
void inputData(struct Record add);
void initializeData(struct Record add);
void addData(struct Record add);
void showHeader();
void showData();
void searchData();
void searchById(struct Record search, string x);
void deleteData();
void deleteByLine(struct Record del);
void deleteAll();
void modifyData();
void modifyByLine(struct Record update);
void modifyById(struct Record update);

void cls() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void ps() {
    #ifdef _WIN32
        printf("%s ", data(msg.notifInfo));
        system("pause");
    #else
        printf("%s Press any key to continue . . .", data(msg.notifInfo));
        cin.get();
        cin.get();
    #endif
}

void slp(int n) {
    #ifdef _WIN32
        Sleep(n);
    #else
        sleep(n);
    #endif
}

void displayMenu() {
    printf("********* RECORD DATA JAMUR TIRAM *********\n");
    printf("[1]. Tambah Data\n");
    printf("[2]. Tampilkan Data\n");
    printf("[3]. Cari Data\n");
    printf("[4]. Edit Data\n");
    printf("[5]. Hapus Data\n");
    printf("[6]. Keluar\n");
    printf("*******************************************\n");
    printf("  >> ");
}

int main() {
    struct Record db;
    int opt;

    do {
        displayMenu();
        cin >> opt;

        switch (opt) {
        case 1:
            inputData(db);
            ps();
            cls();
            break;
        case 2:
            showData();
            break;
        case 3:
            searchData();
            ps();
            cls();
            break;
        case 4:
            modifyData();
            ps();
            cls();
            break;
        case 5:
            deleteData();
            ps();
            cls();
            break;
        case 6:
            cls();
            printf("%s Good Bye !\n", data(msg.notifInfo));
            ps();
            exit(0);
            break;
        default:
            printf("%s Invalid choice\n", data(msg.notifInvalid));
            ps();
            cls();
            break;
        }
    } while (opt != 6);
}

int counter() {
    int n = 0;
    string line;
    ifstream db;
    db.open("data.txt");

    while (!db.eof()) {
        getline(db, line);
        n++;
    }
    return n++;
}

void inputData(struct Record add) {
    do {
        // Initialize data.txt
        initializeData(add);
        // User Input Data
        printf("*************** TAMBAH DATA ***************\n");
        printf("%s Masukkan tanggal [yyyymmdd] : ", data(msg.notifInfo));
            cin >> add.tanggal;
        printf("%s Masukkan id                 : ", data(msg.notifInfo));
            cin.ignore();
            getline(cin, add.id);
        printf("%s Masukkan kuantitas [kg]     : ", data(msg.notifInfo));
            cin >> add.qty;
        printf("%s Masukkan harga              : Rp.", data(msg.notifInfo));
            cin >> add.harga;
        printf("*******************************************\n");

        // Case typo
        printf("%s Apakah data yang dimasukkan sudah benar ? [y/n]\n", data(msg.notifInfo));
        printf("  >> ");
        char opt;
        cin >> opt;
        if (toupper(opt) != 'N') {
            break;
        } 
    } while(true);
    
    printf("%s Menambah Data . . .\n", data(msg.notifInfo));
    slp(1500);
    addData(add);
    // Case err when add data
    // if (addData != err) {
    //     printf("%s Berhasil Menambah Data\n", data(msg.notifInfo));
    // } else {
    //     printf("%s Gagal Menambah Data\n", data(msg.notifInvalid));
    // }
}

void initializeData(struct Record add) {
    // Declare external file
    // to pointers
    FILE *db;

    // Case "data.txt" nil
    // create it
    // and write header
    if (fopen("data.txt", "r") == NULL) {
        // Open "data.txt"
        // write mode
        db = fopen("data.txt", "w");

        // Append header
        ofstream write;
        write.open("data.txt", ios::app);
        write   << "#"
                << setw(10) << "ID"
                << setw(15) << "TANGGAL"
                << setw(15) << "KUANTITAS"
                << setw(20) << "HARGA per KG"
                << setw(20) << "TOTAL"
                << endl;
        // Close write var
        write.close();
    } else {
        return;
    }

    // Close pointers file
    fclose(db);
}

void addData(struct Record add) {
    // Data store
    // on data.txt
    ofstream write;
    write.open("data.txt", ios::app);

    write   << counter()-1
            << setw(10) << add.id
            << setw(15) << add.tanggal
            << setw(15) << add.qty
            << setw(20) << add.harga
            << setw(20) << add.qty * add.harga
            << endl;

    write.close();
}

void showHeader() {
    cout<< "#"
        << setw(10) << "ID"
        << setw(15) << "TANGGAL"
        << setw(15) << "KUANTITAS"
        << setw(20) << "HARGA per KG"
        << setw(20) << "TOTAL"
        << endl;
}

void showData() {
    printf("*************** TAMPIL DATA ***************\n");
    printf("[1]. Tampilkan Semua Data\n");
    printf("*******************************************\n");
    printf(" >> ");
    int opt;
    cin >> opt;

    string temp;
    ifstream read("data.txt");

    if (read.is_open()) {
        switch (opt) {
        case 1:
            ps();
            cls();
            while (getline(read, temp)) {
                cout << temp << endl;
            }
            break;
        
        default:
            break;
        }
    } else {
        printf("%s File \"data.txt\" tidak ada\n", data(msg.notifInvalid));
        return;
    }

    read.close();
}

void searchData() {
    struct Record search;
    string id, date;

    printf("**************** CARI DATA ****************\n");
    printf("[1]. Cari Data Berdasarkan ID\n");
    printf("[2]. Cari Data Berdasarkan TANGGAL\n");
    printf("*******************************************\n");
    printf(" >> ");
    int opt;
    cin >> opt;

    switch (opt) {
    case 1:
        id = "ID";
        searchById(search, id);
        break;
    case 2:
        date = "TANGGAL";
        searchById(search, date);
        break;
    default:
        break;
    }
}

void searchById(struct Record search, string x) {
    string id, line;
    int offset;

    printf("%s Masukkan %s untuk dicari : ", data(msg.notifInfo), data(x));
        cin.ignore();
        getline(cin, id);

    ifstream read;
    read.open("data.txt");

    // Case "data.txt" open
    if (read.is_open()) {
        while (!read.eof()) {
            getline(read, line);
            // Match case user input
            // Use find()
            if ((offset = line.find(id, 0)) != string::npos) {
                showHeader();
                cout << line << endl;
            }
        }
    } else {
        printf("%s %s\n", data(msg.notifInvalid), data(msg.fileNil));
        return;
    }

    read.close();
}

void deleteData() {
    struct Record del;

    printf("*************** HAPUS DATA ****************\n");
    printf("[1]. Hapus Data Berdasarkan Nomor\n");\
    printf("[2]. Hapus Semua Data\n");
    printf("*******************************************\n");
    printf(" >> ");
    int opt;
    cin >> opt;

    switch (opt) {
    case 1:
        deleteByLine(del);
        break;
    case 2:
        deleteAll();
        break;
    default:
        break;
    }
}

void deleteByLine(struct Record del) {
    int num;

    printf("%s Masukkan nomor >> #", data(msg.notifInfo));
        cin >> num;

    fstream read;
    read.open("data.txt");

    // To store temp lines
    vector<string> lines;
    string line;

    // Case "data.txt"
    // not found
    if (read.fail()) {
        printf("%s %s\n", data(msg.notifInvalid), data(msg.fileNil));
        return;
    }


    // Store elements
    // on data.txt to lines vector
    while (getline(read, line))
        lines.push_back(line);

    // Case user search
    // largest than line
    if (num > lines.size()) {
        cout << lines.size() << endl;
        printf("%s Nomor tidak ditemukan\n", data(msg.notifInvalid));
        return;
    }

    printf("%s Menghapus data #%i . . . \n", data(msg.notifInfo), num);
    slp(1500);
    
    read.close();

    ofstream write;
    write.open("data.txt");
    // Write it back
    // except the num/line
    for (int i=0; i < lines.size(); i++) {
        if (i != num) {
            write << lines[i] << endl;
        }
    }
    write.close();
}

void deleteAll() {
    printf("%s Apakah anda akan menghapus semua data ? [y/n]\n", data(msg.notifInfo));
    printf("  >> ");
    char opt;
    cin >> opt;

    if (toupper(opt) == 'Y') {
        printf("%s Menghapus Semua Data . . .\n", data(msg.notifInfo));
        fstream db("data.txt", ios::out | ios::trunc);
        db.close();
        slp(1500);
        printf("%s Berhasil Menghapus Semua Data\n", data(msg.notifInfo));
    } else {
        return;
    }

    ofstream write;
    write.open("data.txt", ios::app);
        write   << "#"
                << setw(10) << "ID"
                << setw(15) << "TANGGAL"
                << setw(15) << "KUANTITAS"
                << setw(20) << "HARGA per KG"
                << setw(20) << "TOTAL"
                << endl;
    write.close();
}

void modifyData() {
    struct Record update;
    string id, date;

    printf("*************** UPDATE DATA ***************\n");
    printf("[1]. Update Data Berdasarkan Nomor\n");
    printf("*******************************************\n");
    printf(" >> ");
    int opt;
    cin >> opt;

    switch (opt) {
    case 1:
        modifyByLine(update);
        break;
    default:
        break;
    }
}

void modifyByLine(struct Record update) {
    int num;

    printf("%s Masukkan nomor >> #", data(msg.notifInfo));
    cin >> num;

    fstream read;
    read.open("data.txt");

    // To store temp string
    vector<string> lines;
    string line;

    // Case "data.txt"
    // not found
    if (read.fail()) {
        printf("%s %s\n", data(msg.notifInvalid), data(msg.fileNil));
        return;
    }

    // Move elements
    // of "data.txt"
    // to lines vector 
    while (getline(read, line))
        lines.push_back(line);

    // Case number input
    // by user
    // large than lines size
    if (num > lines.size()) {
        printf("%s Nomor tidak ditemukan\n", data(msg.notifInvalid));
        return;
    }

    // User re-input "data.txt"
    printf("%s Masukkan tanggal [yyyymmdd] : ", data(msg.notifInfo));
        cin >> update.tanggal;
    printf("%s Masukkan id                 : ", data(msg.notifInfo));
        cin.ignore();
        getline(cin, update.id);
    printf("%s Masukkan kuantitas [kg]     : ", data(msg.notifInfo));
        cin >> update.qty;
    printf("%s Masukkan harga              : Rp.", data(msg.notifInfo));
        cin >> update.harga;

    read.close();

    ofstream write;
    write.open("data.txt");
    // Write it back
    // except number
    // input by user
    for (int i=0; i < lines.size(); i++) {
        if (i != num) {
            write << lines[i] << endl;
        } else {
            write   << num
                    << setw(10) << update.id
                    << setw(15) << update.tanggal
                    << setw(15) << update.qty
                    << setw(20) << update.harga
                    << setw(20) << update.qty * update.harga
                    << endl;
        }
    }

    write.close();
}
