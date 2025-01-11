#include <iostream>
#include <string>
using namespace std;
// using namespace std; //Baris using namespace std dapat dihilangkan dan diganti dengan stdkata kunci, diikuti oleh ::operator untuk string( dan cout) contoh 
// std::cout

int main() 
// {
//     //string namaLengkap;
//     // cout << "Nama Lengkap ? :";
//     // cin >> namaLengkap;
//     // cout << "Nama kamu adalah:" << namaLengkap << "\n";

{
cout << "<<===========BATAS==========>>\n";
    
    string fullName;
    cout << "Nama mu siapa?";
    getline(cin,fullName);
    cout << "Nama kamu adalah:" << fullName;

    return 0;

}

// fungsi getline() fungsi untuk membaca satu baris teks. Dibutuhkan cinsebagai parameter pertama, dan variabel string sebagai yang kedua:
// atau getline membaca spasi jg