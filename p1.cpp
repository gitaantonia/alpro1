#include <iostream>

using namespace std;
/*void ganti(int *p)
{
    *p = 10;
}

char *nama_hari(int index)
{
    char *nama_hari[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    return nama_hari[index];
}

void kuadrat(int *nilai)
{
    cout << "Alamat dari nilai: " << nilai << endl;
    *nilai = *nilai * *nilai;
}*/
main()
{
    /*int *p;
    float *x;
    char *s;
    p = (int *)malloc(sizeof(int)); // alokasi memori kalau p kosong
    cout << p;*/

    /*int *p, *q, *r;
    int n = 10;
    p = &n;
    *p=8;
    cout << *p << endl;
    cout << p << endl;
    cout << n;*/

    /*int array[3] = {10, 20, 30};
    //cout << *(array+1);
    int i;
    int *k;
    k=array;
    for(i=0; i<3; i++)
    {
        cout << *(k+i) << endl;
    }*/

    /*int n;

        char kota[] = "YOGYAKARTA";
        cout << kota << endl;
        char *i = kota;
        cout << *i << endl;
        cout << i << endl;

        for(n=0; n<10; n++)
        {
            cout << *(i+n) << " ";
        }*/

    /*    int x = 10;
        cout << x << endl;
        ganti(&x);
        cout << &x << endl;
        cout << x;

        void (*functionpointer)(int *nilai);
        functionpointer = &kuadrat;
        functionpointer(&x);
        cout << x << endl;*/

    int x = 20;
    int *i = &x;
    int **ii = &i;
    cout << **ii << endl;//20
    cout << &ii << endl;//a8
    cout << *ii << endl;//bc
    cout << ii << endl;//b0
    cout << *i << endl;//20
    cout << &i << endl;//b0
    cout << i << endl;//bc
    cout << &x << endl;//bc
    cout << x << endl;//20
}