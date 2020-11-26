#include <iostream>

using namespace std;

void input_matriks(int m[][4]);

void cetak_matriks(int m[][4]);

int main() {
    int matriks[4][4];

    input_matriks(matriks);

    cout << endl;

    cetak_matriks(matriks);

    return 0;
}

void input_matriks(int m[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Matriks[" << i << "][" << j << "] : "; cin >> m[i][j];
        }
        cout << endl;
    }
}

void cetak_matriks(int m[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

/* Menerima masukan sebuah matriks integer 4 x 4, prosedur tersebut
digunakan untuk mengisi elemen matriks berdasarkan masukan dari user. */