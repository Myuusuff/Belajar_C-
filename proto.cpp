#include <iostream>

using namespace std;

double luas(double a, double b);
void cetak_luas(double a, double b);
double keliling(double p, double l);
void cetak_keliling(double p, double l);

int main()
{
    double p,l;
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;


    cetak_luas(p,l);
    cetak_keliling(p,l);

}

double luas(double a, double b){
    return a * b;
}
double keliling(double p, double l){
    return 2 * ( p + l);
}

void cetak_luas(double a, double b){
    cout << "Luasnya Adalah : ";
    cout << luas(a,b) << endl;
}
void cetak_keliling(double p, double l){
    cout << "Kelilingnya Adalah : ";
    cout << keliling(p,l);
}

