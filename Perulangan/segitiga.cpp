#include <iostream>
#include <cmath>

#define maks 10

using namespace std;

typedef struct {
    int x;
    int y;
    int r;
} segitiga;

int main() {
    int i, n;

    segitiga array_segitiga[maks];

    cout << "Berapa banyak segitiga : "; cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Segitiga ke-" << i+1 << endl;
        cout << "Masukkan nilai x : "; cin >> array_segitiga[i].x;
        cout << "Masukkan nilai y : "; cin >> array_segitiga[i].y;
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        array_segitiga[i].r = sqrt(pow(array_segitiga[i].x, 2) + pow(array_segitiga[i].y, 2));
    }

    for (i = 0; i < n; i++) {
        cout << "Segitiga ke-" << i+1 << endl;
        cout << "Nilai x (sisi siku-siku) : " << array_segitiga[i].x << endl;
        cout << "Nilai y (sisi siku-siku) : " << array_segitiga[i].y << endl;
        cout << "Nilai r (sisi miring) : " << array_segitiga[i].r << endl;
        cout << endl;
    }

    return 0;
}

/* Mengisi array dan memproses array yang berisi elemen tipe bentukan
segitiga (tipe terstruktur segitiga terdiri dari x, y, r). Array segitiga
masukan hanya telah diisi x dan y-nya saja pada proses pengisian array.
Hitung sisi miring setiap elemen dan isikan pada atribut r dari segitiga. */