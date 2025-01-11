#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // int Hari = 9;
    int Hari = 6;
    // switch untuk memilih 1 peryataan yang benar
    // case nilai masing masing
    // break berfungsi menghentikan atau istirahat
    // Kata defaultkunci menentukan beberapa kode untuk dijalankan jika tidak ada kasus yang cocok:
    switch (Hari) {
        case 1:
        cout << "Senin";
        break;
        case 2:
        cout << "Selasa";
        break;
        case 3:
        cout << "Rabu";
        break;
        case 4:
        cout << "Kamis";
        break;
        case 5: 
        cout << "Jumat";
        break;
        case 6:
        cout << "Sabtu";
        break;
        case 7:
        cout << "Ahad";
        default:
        cout << "angka yang tidak ada maka default yang muncul";
    }

    getch;
}