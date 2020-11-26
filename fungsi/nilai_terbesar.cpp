#include <iostream>

using namespace std;

int nilai_terbesar(int *a, int *b, int *c, int *d) {
    int i, maks;

    do {

        if (maks < *a) {
            maks = *a;
        }

        *a = *b;
        *b = *c;
        *c = *d;
        *d = maks;

        i += 1;
    } while (i < 4);

    return maks;
}

int main() {
    int temp, a, b, c, d;

    cout << "Masukkan angka : "; cin >> a;
    cout << "Masukkan angka : "; cin >> b;
    cout << "Masukkan angka : "; cin >> c;
    cout << "Masukkan angka : "; cin >> d;
    cout << endl;

    cout << "Nilai terbesar adalah " << nilai_terbesar(&a, &b, &c, &d) << endl;

    return 0;
}

/* Menerima 4 buah masukan integer dan akan mengembalikan nilai
terbesar dari ke-4 integer masukan tersebut. Gunakan fungsi tukar
yang sudah dibuat sebelumnya. */