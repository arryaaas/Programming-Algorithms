#include <iostream>

using namespace std;

int main() {
    char a, b;

    cout << "Masukkan karakter pertama : "; cin >> a;
    cout << "Masukkan karakter kedua : "; cin >> b;

    cout << "Nilai ASCII dari " << a << " adalah " << int(a) << endl;
    cout << "Nilai ASCII dari " << b << " adalah " << int(b) << endl;

    cout << "Jumlah ASCII dari " << a << " dan " << b << " adalah " << int(a) + int(b) << endl;

    return 0;
}

/* Menjumlahkan kode ASCII dari dua karakter masukan user */