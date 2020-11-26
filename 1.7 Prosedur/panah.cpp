#include <iostream>

using namespace std;

void panah(int n) {
    int i, j;

    for (i = 0; i < (n / 2); i++) {
        for (j = 0; j < i; j++) {
            cout << " ";
        }

        for (j = 0; j < n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    if ((n % 2) == 1) {
        for (j = 0; j < (n / 2); j++) {
            cout << " ";
        }

        for (j = 0; j < n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (i = 0; i < (n / 2); i++) {
        for (j = ((n / 2) - i); j > 1; j--) {
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

    panah(angka);

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

misal masukan angka adalah 4 maka akan menampilkan :

    *****
     ***** 
     ***** 
    *****  

*/