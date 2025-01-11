#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,k;
    cout << "============================" << endl;
    cout << "Masukkan angka : ";
    cin >> a;


    // for(int i= 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << i << "";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            k++;
            cout << k << " ";
        }
        cout << endl;
    }
return 0;

}