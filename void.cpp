// void adalah tipe data kosong ;
// void tidak memakai kode return karena tidak mengembalikan nilai apapun;

#include <iostream>

using namespace std;

// worker {Menjalankan saja}
int kuadrat( int x){
    int y;
    y = x * x;
    return y;
}

void tampil(int input){
    cout << "Menampilkan Hasil Void : ";
    cout << input << endl;
}

int main() {
    int input, hasil;
    cout << "Nilai Kuadrat Dari : ";
    cin >> input;

    hasil = kuadrat(input);
    tampil(hasil);

    return 0;
}