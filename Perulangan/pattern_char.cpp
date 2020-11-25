#include <iostream>

#define maks 100

using namespace std;

int main() {
    int i, j, n;

    char tabChar[maks];

    cout << "Berapa banyak data : "; cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Masukkan karakter : "; cin >> tabChar[i];
    }

    cout << endl;

    for (i = 0; i < (n / 2); i++) {
        for (j = 0; j <= (i-1); j++) {
            cout << " ";
        }
        cout << tabChar[i] << endl;
    }

    for (i = (n / 2); i < n; i++) {
        for (j = 0; j < (n - (i + 1)); j++) {
            cout << " ";
        }
        cout << tabChar[i] << endl;
    }
}

/* Menampilkan pola-pola tampilan array of char sebagai berikut

    a
     l
      p
     r
    o                                                           
    
*/