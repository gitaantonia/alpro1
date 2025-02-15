#include <iostream>
using namespace std;

int main() {
    char str[] = "Pemrograman Dasar Turbo C";
    char* ptr = str;

    while (*ptr) {
        cout << ptr << endl;
        while (*ptr && *ptr != ' ') ptr++; // Maju ke spasi berikutnya
        if (*ptr) ptr++; // Lewati spasi
    }

    return 0;
}
