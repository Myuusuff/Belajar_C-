#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
    // ambil waktu saat ini dengan kode 
    time_t time_now = time(0);

    // konversi waktu saat ini ke struktur tm dgn cara dibawah ini:
    tm * time_tm = localtime(&time_now);

    // ambil jam dari struktur tm
    int hour = time_tm -> tm_hour;

    // menentukan selamat pagi atau malam berdasarkan jam
    string buat = (hour > 20 ) ? "Selamat pagi" : "Selamat Malam";

    // jeda program hingga input dari pengguna
    cin.get();

    getch;
}

