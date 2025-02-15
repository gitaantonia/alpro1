#include <iostream>
using namespace std;

int main() {
    const char* nama1 = "hanif";
    const char* nama2 = "fathimah";
    const char* nama3 = "zahira";

    // Menukar pointer, bukan isi string
    const char* temp = nama1;
    nama1 = nama3;
    nama3 = nama2;
    nama2 = temp;

    cout << "Setelah ditukar:" << endl;
    cout << "nama1 = " << nama1 << endl;
    cout << "nama2 = " << nama2 << endl;
    cout << "nama3 = " << nama3 << endl;

    return 0;
}
