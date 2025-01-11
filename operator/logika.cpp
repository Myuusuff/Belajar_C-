#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    // logica and
    int x = 8;
    int y = 6;
    cout << "hasil x dan y : ";
    cout << ( x > 6 && x < 11) << "\n"; // 1 karena x lebih besar dari 6 dan x lebih kecil dari 11;

    //============================//
    cout << "============================ \n";

    /* ============================== */
    // logica yang benar dari benar
    int a = 13;
    int b = 9;
    cout << "hasil a dan b : ";
    cout << (a > 9 || a < 12) << "\n"; // 1 karena salah satu kondisi benar (13 lebih besar dari 9, tetapi 13 tidak kurang dari 12)


    
    cout << "============================ \n";
    // 
    int c = 28;
    int d = 26;
    cout << "hasil c dan d : ";
    cout << ( c < 26 || c < 27 ) << "\n"; // 0 karena salah satu kondisi salah ( 26 lebih kecil dari c, tetapi 27 tidak lebih dari 28)




    /* ============================= */
    // nd masuk logica
    cout << "============================ \n";
    int e = 37;
    int f = 34;
    cout << "hasil e dan f : ";
    cout << !(e >34 && e < 39); // 0 karena ! mengubah semuanya
                                // arti ! (tidak ) sama dengan logica and

    getch;
    
}