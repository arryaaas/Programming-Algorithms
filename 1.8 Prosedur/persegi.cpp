#include <iostream>

using namespace std;

void persegi(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
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

    persegi(angka);

    return 0;
}

/* Menerima masukan sebuah angka untuk menampilkan gambar
bintang ke samping sesuai dengan angka masukan, misal masukan
angka adalah 5 maka akan menampilkan :

    *****
    ***** 
    ***** 
    ***** 
    *****  
    
*/