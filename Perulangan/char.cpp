#include <iostream>

#define maks 100

using namespace std;

int main() {
    int i, n;

    char tabChar[maks];

    cout << "Berapa banyak data : "; cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Masukkan karakter : "; cin >> tabChar[i];
    }

    cout << endl;

    for (i = 0; i < n; i++) {
        if ((tabChar[i] == 'a') ||
            (tabChar[i] == 'i') ||
            (tabChar[i] == 'u') ||
            (tabChar[i] == 'e') ||
            (tabChar[i] == 'o')) {
                continue;
        } else {
            cout << tabChar[i] << " adalah karakter konsonan dengan indeks ke-" << i << endl;
        }
    }

    return 0;
}

/* Mengisi dan memproses array berisi elemen karakter dan menampilkan 
isi elemen array jika isi elemen array adalah karakter konsonan. */