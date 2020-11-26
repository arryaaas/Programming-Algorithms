#include <iostream>

using namespace std;

void input_matriks(int m[][4]);

void cetak_matriks(int m[][4]);

void perkalian_matriks(int m1[][4], int m2[][4], int m3[][4]);

int main() {
    int matriks1[4][4], matriks2[4][4], matriks3[4][4];

    cout << "Matriks 1" << endl;
    input_matriks(matriks1);

    cout << "Matriks 2" << endl;
    input_matriks(matriks2);

    cout << endl;

    perkalian_matriks(matriks1, matriks2, matriks3);
    
    cetak_matriks(matriks3);

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

void perkalian_matriks(int m1[][4], int m2[][4], int m3[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            m3[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
            }
        }
    }
}

/* Menerima masukan 2 buah matriks integer 4 x 4, dan akan mengembalikan
hasil perkalian antara ke-2 matriks tersebut. */