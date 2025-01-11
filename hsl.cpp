#include <iostream>
using namespace std;


int yusjul(int x){
    int y;
    y = x * x;
    return y;
}

void julian(int aku){
    cout << " = ";
    cout << aku << endl;
    
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;

}
int main()
{
    int aku,kamu,a,b,hsl;
    cout << "   Program Void " << endl;
    cout << "===================" << endl;
    cout << " Masukkan Nilai : ";
    cin >> aku;
    cout << "Hasil dari " << aku << " X " << aku;

    kamu = yusjul(aku);
    julian(kamu);

    cout << endl;

    cout << "Masukkan Nili A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;

    hsl = tambah(a,b);
    
    cout << "Hasil dari " << a  << " + " << b << " = ";
    cout << hsl;



}