#include <iostream>

using namespace std;

void jajar_genjang(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            cout << " ";
        }

        for (j = 0; j < n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
}

int main() {
    int angka;

    cout << "Masukkan angka : "; cin >> angka;
    cout << endl;

    jajar_genjang(angka);

    return 0;
}

/* Menerima masukan sebuah angka untuk menampilkan gambar
sebagai berikut.

misal masukan angka adalah 5 maka akan menampilkan :

    *****
     ***** 
      ***** 
       ***** 
        *****  
    
*/