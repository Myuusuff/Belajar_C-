#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int x = 6;
    // int y = 18;
    cout << min(6, 18) << "\n"; // fungsi min mencari nilai terndah dari x dan y
    cout << max(23, 45) << "\n";    // fungsi max mencari nilai tertinggi dari x dan y

    cout << "<==========BATAS=========>\n";
    cout << "hasil dari akar quadrat (128) adalah: "; 
    cout << sqrt(128) << "\n";
    cout << "hasil dari bulat angka (8.3) adalah: "; 
    cout << round(8.3) << "\n";
    cout << "hasil dari logaritma natural (4) adalah: "; 
    cout << log(4);


    return 0;
}


// Daftar fungsi matimatika populer lainnya(dari <cmath> perpustakaan ) dapat ditemukan pada label dibawah ini;
// Deskripsi            fungsi
// abs(x)             - Mengembalikan nilai absolut dari x
// acos(x)            - Mengembalikan arccosine dari x
// asin(x)            - Mengembalikan arcsine dari x
// atan(x)            - Mengembalikan arctangent dari x
// cbrt(x)            - Mengembalikan akar pangkat tiga dari x
// ceil(x)            - Mengembalikan nilai x yang dibulatkan ke atas ke bilangan bulat
//                     terdekatnya
// cos(x)             - Mengembalikan kosinus dari x
// cosh(x)            - Mengembalikan kosinus hiperbolik dari x
// exp(x)             - Mengembalikan nilai Ex
// expm1(x)           - Mengembalikan ex -1
// fabs(x)            - Mengembalikan nilai absolut dari x mengambang
// fdim(x, y)         - Mengembalikan selisih positif antara x dan y
// floor(x)           - Mengembalikan nilai x yang dibulatkan ke bawah ke bilangan bulatterdekat
// hypot(x, y)        - Mengembalikan sqrt(x2 +y2) tanpa overflow menengah atau underflow
// fma(x, y, z)       - Mengembalikan x*y+z tanpa kehilangan presisi
// fmax(x, y)         - Mengembalikan nilai tertinggi dari floating x dan y
// fmin(x, y)         - Mengembalikan nilai terendah dari floating x dan y
// fmod(x, y)         - Mengembalikan floating point sisa dari x/y
// pow(x, y)          - Mengembalikan nilai x pangkat y
// sin(x)             - Mengembalikan sinus dari x (x dalam radian)
// sinh(x)            - Mengembalikan sinus hiperbolik dari nilai ganda
// tan(x)             - Mengembalikan tangen suatu sudut
// tanh(x)            - Mengembalikan tangen hiperbolik dari nilai ganda