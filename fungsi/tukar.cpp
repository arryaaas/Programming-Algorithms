#include <iostream>

using namespace std;

void tukar(int *a, int *b) {
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << endl;

    tukar(&a, &b);

    cout << "Nilai A dan B setelah ditukar" << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    return 0;
}

/* Fungsi tukar yang menerima 2 buah variabel A dan B
yang bertipe integer. Fungsi tersebut akan mengembalikan
nilai variabel A <- B dan B <- A */