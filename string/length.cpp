#include <iostream>
#include <string>
using namespace std;


/* cara hitung huruf*/
int main()
{
    string teks = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "panjang string adalah: " << teks.size();
    cout << "panjang string adalah: " << teks.length() << "\n";
   



// Tip: Anda mungkin melihat beberapa program C++ yang menggunakan size()fungsi untuk mendapatkan panjang string. Ini hanya alias dari length(). Ini sepenuhnya terserah Anda jika Anda ingin menggunakan length() atau size():

cout << "<<==============HAI==============>>\n";


// cara mengakses ke dalam kata untuk mengubah 1 huruf!
    string myTeks = "SILAHKAN";
    myTeks[1] = 'E';  // ubah huruf dari angka 0
    myTeks[4] = 'T';  // yang saya ubah ini huruf I jadi E
                      // dan huruf H jadi T
    cout << myTeks;
    return 0;

    // "cara menambahkan kutipan di tengah tengah kalimat dengan cara menggunakan \" contoh \"   begituuuu"


}