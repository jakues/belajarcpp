#include <iostream>

using namespace std;

struct protect {
    string errUser        = "Akses ditolak untuk user";
    string errPass        = "Password salah untuk user";
	string acessGranted   = "Login berhasil untuk user";
};

int main() {
    struct info {
        struct protect infoProtect;
        string userAdmin = "rill";
        string passAdmin = "2002";
        string user;
        string pass;
    } identity;

    printf("Input user : ");
    getline(cin, identity.user);
    printf("Input pass : ");
    getline(cin, identity.pass);

    if (identity.user != identity.userAdmin) {
        printf("%s %s", data(identity.infoProtect.errUser), data(identity.user));
    } else if (identity.pass != identity.passAdmin) {
        printf("%s %s", data(identity.infoProtect.errPass), data(identity.user));
    } else {
        printf("%s %s", data(identity.infoProtect.acessGranted), data(identity.user));
    }
}