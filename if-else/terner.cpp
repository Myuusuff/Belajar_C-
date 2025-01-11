#include <iostream>
#include <conio.h>
using namespace std;

// operator ternary karena terdiri dari tiga operan. 
// Ini dapat digunakan untuk mengganti beberapa baris kode dengan satu baris. 
// Ini sering digunakan untuk menggantikan pernyataan sederhana if else:
int main()
{
    int Waktu = 20;
    string Hasil = (Waktu > 19) ? "Hari Terang" : "Hari Gelap"; 
    cout << Hasil;                  // hari terang benar, hari gelap salah 
                                    // karena waktu lebih besar dari 19 
    getch;
}