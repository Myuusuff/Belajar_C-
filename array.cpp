#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string oto[4] = {"Volvo", "BMW", "ford", "Mazda"};

    // cout << "Tampilkan oto yang ke 0" << endl;
    // cout << oto[0];
    // cout << endl;

    cout << "=== Program Array String ===" << endl;
    string aku[5] = {"Marcedez", "BMW", "Audi", "Lexus", "Tesla"};

    for(int i = 0; i <= 4; i++){
        cout << i  << " = "<< aku[i] << endl;
    } 

    cout << endl;

    cout << "=== Program Array integer ===" << endl;
    int angka[6] = {10, 20, 30, 40, 50, 60};

    for(int y = 0; y <= 5; y++){
        cout << y << " = " << angka[y] << endl;
    }

    cout << endl;

    cout << "=== Array lingkaran === " << endl;
    int nomor[6] = {100, 200, 300, 400, 500, 600};
    for(int i : nomor){
        cout << i << endl;
    }


    return 0;


}