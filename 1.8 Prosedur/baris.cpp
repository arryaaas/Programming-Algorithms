#include <iostream>

using namespace std;

void baris(int n) {
    int i;

    for (i = 0; i < n; i++) {
        cout << "*";
    }

    cout << endl;
}

int main() {
    int angka;

    cout << "Masukkan angka : "; cin >> angka;
    cout << endl;

    baris(angka);

    return 0;
}

/* Menerima masukan sebuah angka untuk menampilkan gambar
bintang ke samping sesuai dengan angka masukan, misal masukan
angka adalah 5 maka akan menampilkan :

    ***** 
    
*/