#include <iostream>

#define maks 10

using namespace std;

int main() {
    int i, n;
    float hasil = 0;

    string tabStr[maks];
    float tabFloat[maks];

    cout << "Berapa banyak data : "; cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Masukkan bilangan desimal : "; cin >> tabStr[i];
    }

    for (i = 0; i < n; i++) {
        tabFloat[i] = stof(tabStr[i]);
    }

    for (i = 0; i < n; i++) {
        hasil = hasil + tabFloat[i];
    }

    cout << "Hasil penjumlahan ketiga bilangan tersebut adalah " << hasil << endl;

    return 0;
}

/* Mengisi dan memproses array yang berisi elemen string yang
menyatakan nilai float dan menampilkan hasil pertambahan dari
elemen string array yang telah diproses dan diubah menjadi float
(ubah elemen string menjadi float), misal isi array: "2.3", "4.5",
"6.9" maka hasil keluaran adalah hasil perubahan menjadi float dari
array maka hasil keluarannya adalah 2.3 + 4.5 + 6.9 yaitu 13.7. */