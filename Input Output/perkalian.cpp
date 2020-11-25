#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;

    cout << "Masukkan 3 angka lalu tekan enter untuk setiap angka" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    d = a * b * c;

    cout << a << " * " << b << " * " << c << " = " << d;

    return 0;
}

/* Menerima 3 buah masukan bilangan bulat dan menampilkan hasil perkalian
ketiga bilangan! */