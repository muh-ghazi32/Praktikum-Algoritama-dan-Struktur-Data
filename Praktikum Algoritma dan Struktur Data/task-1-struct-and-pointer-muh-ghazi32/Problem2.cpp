#include <iostream>
using namespace std;

struct Kendaraan {
    string plat_nomor;
    string jenis;
    string nama_pemilik;
    string alamat;
    string kota;
};

int main() {
    Kendaraan mobil = {"DA1234MK", "RUSH", "Andika Hartanto", "Jl. Kayu Tangi 1", "Banjarmasin"};

    cout << "Plat Nomor Kendaraan : " << mobil.plat_nomor << endl;
    cout << "Jenis Kendaraan      : " << mobil.jenis << endl;
    cout << "Nama Pemilik         : " << mobil.nama_pemilik << endl;
    cout << "Alamat               : " << mobil.alamat << endl;
    cout << "Kota                 : " << mobil.kota << endl;
}