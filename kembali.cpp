// tutor memanggil fungsi  
// mulai dari tipe data, variabel pilih tipe data, variabel input;
// buat tipe data dan inisialisasi variabel;
// variabel y dengan berfungsi sebagai wadah untuk variabel x;
// kembali ke variabel y; 


#include <iostream>

using namespace std;

// reporter { melaporkan }
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    int c;
    c = a + b;
}

int main(){

    int input, hasil, a, b, hsl;
    cout << "Masukkan angka : ";
    cin >> input;

    hasil = kuadrat(input);
    cout << "Kuadrat dari : " << input << " Adalah " << hasil << endl;


    cout << "Masukkan Nilai A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;

    hsl = tambah(a,b);
    cout << "Nilai a : " << a << " Nilai b : " << b << endl;
    cout << " Hasil dari a + b = " << hsl << endl;



    return 0;


}