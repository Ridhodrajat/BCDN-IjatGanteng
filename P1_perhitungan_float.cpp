#include <iostream>  // library biar fungsi cout & cin bisa dipakek

using namespace std; // biar ga perlu nulis std lagi pas ngoding

 int main() // opening ni wajib 
{
    int panjang, lebar, tinggi, volume; // menentukan variabel
    panjang = 5; // mengisi variabel panjang
    lebar = 25; // mengisi variabel lebar
    tinggi = 15; // mengisi variabel tinggi
    volume = panjang * lebar * tinggi; // proses perhitungan 

    cout << "Hasil perhitungan volume balok = " << volume; // output hasil perhitungan

    // ni versi 1 yang dh di isi duluan di coding

}

// kalo mau make salah satu tinggal tambahkan komentar di semua coding nya

int main ()
{
    int panjang, lebar, tinggi, volume;
    cout << "Masukkan Panjang : "; // meminta input panjang
    cin >> panjang; // memasukkan hasil input ke variabel panjang

    cout << "Masukkan Lebar : "; // meminta input untuk lebar
    cin >> lebar; // memasukkan hasil input ke variabel lebar

    cout << "Masukkan Tinggi : "; // meminta input untuk tinggi
    cin >> tinggi; // memasukkan hasil input ke variabel lebar
    volume = panjang * lebar * tinggi; // proses perhitungan semua hasil input

    cout << "Hasil perhitungan volume balok = " << volume; // output hasil perhitungan
    
    // ni versi 2 yang perlu input dari user/pengguna
}

