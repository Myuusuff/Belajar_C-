#include <iostream>
using namespace std;

int main()
{
    string suhu[6];
    cout << " Masukkan 5 Buah Data Suhu :" << endl;
    for(int i = 1; i <=5; i++)
    {
        cout << i << " : ";
        cin >> suhu[i];
    }

    cout << "\n\nData Suhu Yang Anda Masukkan :" << endl;
    for( int i= 1; i <=5; i++){
        cout << i << " : " << suhu[i];
        cout << endl;
    }

return 0;
}