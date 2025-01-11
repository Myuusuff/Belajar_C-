#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // int x = 20;
    // int y = 16;

    // if (x > y) {
    //     cout << "benar,karena: x lebih besar dari y";
    // } else {
    //     cout << "salah,karena: x lebih besar dari y \n";
    // }

    cout << "<=========BATAS========> \n";
    int Waktu = 24;
    if ( Waktu < 18 ) {
        cout << " Selamat malam "; // kenapa yang keluar selamat sore? 
                                // jika waktu kurang dari 24 maka akan mencetak selamat sore
    } else {
        cout << " Selamat sore";
    }

    getch;
}