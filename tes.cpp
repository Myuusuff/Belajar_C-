#include <iostream>

using namespace std;

void tambah(int a, int b){
    int hasil;
    hasil = a + b;

    cout << a << " + " << b << " = ";
    cout << hasil << endl;
}

int kuadrat(int a) {
    int b;
    b = a * a;

    cout << "Kuadrat dari " << a;
    cout << " Adalah : " << b << endl;

}

int kali(int a, int b){
    int c;
    c = a * b;
    return c;

}

float bagi(float a){
    float b;
    b = a / 2;

    cout << a << " Dibagi jadi 2 = " << b << endl;

}

int main()
{
    int a,b,c,d,e;
    float A;

    cout << "======Tambah======" << endl;
    cout << "Input Blgn A : ";
    cin >> a;
    cout << "Input Blgn B : ";
    cin >> b;
    cout << "==================" << endl;

    cout << "======Kuadrat======" << endl;
    cout << "Kuadrat Angka : ";
    cin >> c;
    cout << "===================" << endl;

    cout << "========Kali========" << endl;
    cout << "Masukkan Angka A : ";
    cin >> d;
    cout << "Masukkan Angka B : ";
    cin >> e;
    cout << "====================" << endl;

    cout << "========Bagi========" << endl;
    cout << "Angka di Bagi 2 : ";
    cin >> A;
    
    cout << endl;

    cout << "===================" << endl;

    tambah(a,b);
    kuadrat(c);


    cout << d << " kali " << e;
    cout << " Adalah : " << kali(d,e) << endl;

    bagi(A);

    cout << "=====Selesai=====" << endl;

    

}