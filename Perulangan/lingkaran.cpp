#include <iostream>
#include <cmath>

#define maks 10

const float pi = 3.14;

using namespace std;

typedef struct {
    float jari_jari;
    float luas;
} lingkaran;

int main() {
    int i, n;

    lingkaran array_lingkaran[maks];

    cout << "Berapa banyak lingkaran : "; cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Linkaran ke-" << i+1 << endl;
        cout << "Jari-jari : "; cin >> array_lingkaran[i].jari_jari;
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        array_lingkaran[i].luas = pi * pow(array_lingkaran[i].jari_jari, 2);
    }

    for (i = 0; i < n; i++) {
        cout << "Linkaran ke-" << i+1 << endl;
        cout << "Jari-jari : " << array_lingkaran[i].jari_jari << endl;
        cout << "Luas : " << array_lingkaran[i].luas << endl;
        cout << endl;
    }
    return 0;
}

/* Mengisi dan memproses array masukan berisi elemen tipe terstruktur
lingkaran. Tipe terstruktur lingkaran terdiri dari jari-jari, luas. Pada
proses pengisian, isi hanya jari-jari dari setiap elemen array. Hitung
masing-masing luas lingkaran dari setiap elemen array. */