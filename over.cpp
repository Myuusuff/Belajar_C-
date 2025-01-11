#include <iostream>
using namespace std;

// overloading = menimpa;

float luas_kotak(float p, float l){
    return p*l;
}

float luas_kotak(float s){
    return s * s;
}

int luas_kotak(int s){
    return s * s;
}


int main()
{   
    float a,b,c;
    int d;
    cout << "Masukkan Nilai a : ";
    cin >> a;
    cout << "Masukkan Nilai b : ";
    cin >> b;
    cout << "Input Angka desimal : ";
    cin >> c;
    cout << "Input Angka Bulat : ";
    cin >> d;

     cout << "Hasil dari " << a << " kali ";
     cout << b << " : " << luas_kotak(a,b) << endl;

     cout << "Hasil dari " << c << " kali " << c << " : ";
     cout << luas_kotak(c) << endl;

     cout << "Hasil dari " << d << " kali " << d << " : ";
     cout << luas_kotak(d) << endl;


    cout << "luas kotak 2x3 = " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2x2 = " << luas_kotak(2);

}
