#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // contoh break
    for(int i = 1; i < 10; i++) {
        if ( i == 4) {
            break;          // angka 1 akan berhenti sampe ke 4 sesuai perintah if 
                            // perintahnya itu jika i sampai dengan 4 maka break(istrihat)
                            // tetapi jika perintahnya di ganti jadi continue maka 4 tidak akan muncul 
                            // atau bisa di sebut melompati angka 4 atau angka yang kita mau contoh:
        }
        cout << i << "\n";
    }


    // contoh  continue
    for( int i = 1; i < 10; i++) {
        if ( i == 4) {
            continue;
        }
        cout << i << "\n";
    }



    getch;
}