#include <iostream>
#include <conio.h>
using namespace std;

// Loop bersarang adalah menempatkan loop kedalam loop lainnya contohnya:

// loop luar i jika loop dalam j

int main() 

{
    int x;
    cout << "Masukkan angka : ";
    cin >> x;
for(int i = 1; i <= x; i++) { 
    for (int j = 1; j <= i; j++) {
       cout << "x" ;
    }
       cout << endl;  
    
}

getch;
}