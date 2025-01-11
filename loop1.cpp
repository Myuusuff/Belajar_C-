#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b;
    char lagi;
    atas: // penanda goto
    cout << "Masukkan perulangan yang anda inginkan : "; 
    cin >> b;

    a = 1;
    do 
    {
        cout << a << " \n"; a++;
    }
    while (a <= b);
    cout << "\n\n";
    cout << "Apakah Ingin Melanjutkan lagi ketik [Y/T] : "; 
    cin >> lagi;
    if (lagi == 'y' || lagi == 'Y'){
    goto atas;    
    }
}