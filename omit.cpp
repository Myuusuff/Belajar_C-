#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a;
    string nama[6];
    nama[0] = "Muhammad";
    nama[1] = "Yusuf";
    nama[2] = "Julian";
    nama[3] = "Shafira";
    nama[4] = "Nurul";
    nama[5] = "Ramadhani";

    cout << "==== Program Nama-Nama ====    " << endl;
    cout << " Masukkan Angka : ";
    cin >> a;   

    for(int i = 0; i <= a; i++){
        cout << i << " = " << nama[i] << endl;
    }


    cout << endl;

    int nomor[6] = {10, 20, 30, 40, 50, 60};
    for(int i = 0; i < sizeof(nomor) / sizeof(int); i++){

    cout << nomor[i] << endl;
    }


return 0;

}

