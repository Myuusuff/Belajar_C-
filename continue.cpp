#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int yusjul = 0;
    while( yusjul <= 18) {
        if( yusjul == 9) {
            yusjul++;
            continue;

        }
        cout << "No. " << yusjul << "\n";
        yusjul++;
    }
    getch;
}