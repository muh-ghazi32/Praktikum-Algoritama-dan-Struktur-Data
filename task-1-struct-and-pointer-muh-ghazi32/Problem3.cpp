#include <iostream>
#include <string>

using namespace std;

int main() {
    struct angka_huruf {
    string huruf;   
    string kata;
    int angka;    
    };
    angka_huruf input;

    cout << "Masukkan sebuah huruf: "; cin >> input.huruf; 
    cout << "Masukkan sebuah kata: "; cin >> input.kata; 
    cout << "Masukkan sebuah angka: "; cin >> input.angka;

    cout << "\nHuruf yang Anda masukkan adalah " << input.huruf << endl;
    cout << "Kata yang Anda masukkan adalah " << input.kata << endl;
    cout << "Angka yang Anda masukkan adalah " << input.angka << endl;
}