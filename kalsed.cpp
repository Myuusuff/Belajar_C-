#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char op;
    // Membuat program kalkulator sederhana
    cout << "   Program Kalkulator sederhana" << endl;
    cout << "   ============================" << endl;
    cout << "\n   Masukkan Nilai Pertama : ";
    cin >> a;
    cout << "   Masukkan Operator [+,-,*,/] : ";
    cin >> op;
    cout << "   Masukkan Nilai Kedua : ";
    cin >> b;
 
    if (op == '+') {
    cout << "\n   Hasil dari " << a << op << b;
        hasil = a + b; 
        cout << "=" << hasil << endl;
    } else if (op == '-'){
    cout << "\n   Hasil dari " << a << op << b;
        hasil = a - b;
        cout << "=" << hasil << endl;
    } else if (op == '*'){
    cout << "\n   Hasil dari " << a << op << b;
        hasil = a * b;
        cout << "=" << hasil << endl;
    } else if (op == '/'){
    cout << "\n   Hasil dari " << a << op << b;
        hasil = a / b;
        cout << "=" << hasil << endl;
    } else {
        cout << "\n\n   Operator Tidak Ada" << endl;
    }

    cout << "\n  Terima Kasih Telah Menggunakan Kalkulator Sederhana" << endl;

return 0;

}