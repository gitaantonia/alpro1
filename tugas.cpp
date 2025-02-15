#include <iostream>

using namespace std;
main()
{
    int array[] = {1, 2, 6, 4, 5};
    int *ptr = array;
    int n = sizeof(array) / sizeof(array[0]);
    int i;


    cout << "Semua elemen array: ";
    for (i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }

    int maks = *ptr;
    int min = *ptr;
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > maks)
            maks = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    cout << '\n' << "Nilai maksimum: " << maks << endl;
    cout << "Nilai minimum: " << min << endl;


    int jumlah = 0;
    for (int i = 0; i < n; i++)
    {
        jumlah += *(ptr + i);
    }
    float rata = float(jumlah) / n;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-rata: " << rata << endl;
}