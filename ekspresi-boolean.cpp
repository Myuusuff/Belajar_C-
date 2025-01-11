#include <iostream>
using namespace std;

int main()
{ // contoh kehidupan nyata
    cout << "====contoh pertama====\n";
    int myAge = 18;
    int buatSim = 17;
    cout << (myAge >= buatSim) << "\n"; // 1 = karena umur 18 tahun sudah bisa buat sim

    cout << "=====contoh kedua====\n";
    int umur = 12;
    int wahana = 15;
    cout << (umur >= wahana) << "\n"; // 0 = kenapa karena umur 12 tahun tidak bisa naik wahana

    cout << "=====contoh ketiga====\n";
    int wajib = 7;
    int sd = 7;
    cout << (umur == sd); // 1 karena nilainya sama atau true

    return 0;
}
