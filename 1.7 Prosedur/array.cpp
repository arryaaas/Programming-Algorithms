#include <iostream>

using namespace std;

void isi_array(int n, int tab[]) {
    int i;

    for (i = 0; i < n; i++) {
        cout << "Masukkan angka : "; cin >> tab[i];
    }
}

void cetak_array(int n, int tab[]) {
    int i;

    for (i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
}

int main() {
    int i, banyak;

    cout << "Masukkan banyaknya angka : "; cin >> banyak;
    cout << endl;

    int tabInt[banyak];

    isi_array(banyak, tabInt);

    cout << endl;

    cetak_array(banyak, tabInt);

    return 0;
}

/* Mengisi sebuah array of interger yang banyak elemen
ditentukan oleh masukan user dan menampilkan isi array! */