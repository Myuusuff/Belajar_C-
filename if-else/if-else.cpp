#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    int Waktu = 34;
    if (Waktu < 19) {
        cout << "Selamat Pagi" ;      
                                        // waktu (34) lebih besar dari 19, maka syarat pertama adalah false. Kondisi selanjutnya, dalam else if pernyataan, juga false, jadi kita beralih ke else kondisi karena kondisi 1 dan kondisi 2 keduanya false- dan cetak ke layar "Selamat malam".
                                        //namun jika syarat waktunya 18 maka program akan mencetak "Selamat pagi";
    } else if (Waktu < 25) {
        cout << "Selamat Siang" ;
    } else {
        cout << "Selamat Malam";
    }
    getch;
}