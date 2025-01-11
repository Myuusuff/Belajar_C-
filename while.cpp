#include <iostream>
#include <conio.h>
using namespace std;

// Pada contoh di bawah ini, kode dalam perulangan akan berjalan, 
// berulang kali, selama variabel (i) kurang dari 10:

int main()
{
    // while berfungsi mencetak berulang kali selama variable kurang dari angka yang ditentukan
    int i = 0;
    while( i < 10) {
    cout << i << "\n";
    i++;
    }

    // // do berfungsi ketika loop salah tetap muncul angka 10 
    int i = 10;
    do  {
        cout << i << "\n";
        i++;
    }
    while ( i < 10);

    // for berfungsi mencetak teks berulang

    // for (int i = 1 ; i < 9; i++) {
    //     cout << "Saya tidak akan mengulangi kesalahan saya" << "\n";
    // }





    getch;
}