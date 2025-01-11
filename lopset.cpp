#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    cout << "===========================\n";
    cout << " Masukkan angka : ";
    cin >> a;

    cout << "Pola 1\n";

    for(int b = 1 ; b <= a; b++){
        for(int c = 1; c <= b; c++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 2\n";
    for(int i = 1; i <= a; i++){
        for(int j = a; j >= i; j--){
            cout << "x";
        }
        cout << endl;
    }


    cout << "pola 3\n";
    for(int s = 1; s <= a; s++) {
        for(int y = 1; y <= s ; y++){
            cout << " ";
        }
        for(int y = 1; y >= s; y--){
            cout << "x";
        }
        cout << endl;
    }




getch;
}