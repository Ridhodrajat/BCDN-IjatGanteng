#include <iostream> // library biar fungsi cout & cin bisa dipakek

using namespace std; // biar ga perlu nulis std lagi pas ngoding

int main() // opening ni wajib 
{
    string nama, nim, kelas; // menentukan nama nama variabel

    cout << "Masukkan nama : "; // perintah untuk input nama
    cin >> nama; // hasil input di simpan ke variabel nama

    cout << "Masukkan nim : "; // perintah untuk input nim
    cin >> nim; // hasil input di simpan ke variabel nim

    cout << "Masukkan kelas : "; // perintah untuk input kelas
    cin >> kelas; // hasil input di simpan ke variabel nim

    cout << "Halo " << nama << " " << nim << " " << kelas << " Selamat Datang"; // setelah tu semuanya ditampilin disini


    return 0;
}
