#include <iostream>

using namespace std;

int main() {
    int jam;

    cout << "Berapa jam lembur anda : "; cin >> jam;

    if (jam < 12) {
        cout << "Gaji lembur anda sebesar Rp.100.000" << endl;
    } else if (jam == 12) {
        cout << "Gaji lembur anda sebesar Rp.200.000" << endl;
    } else {
        cout << "Gaji lembur anda sebesar Rp.300.000" << endl;
    }

    return 0;
}

/* Menerima sebuah masukan berupa jam lembur, jika jam lembur kurang
dari 12 jam maka akan menampilkan gaji lembur sebesar Rp.100.000, jika
jam lembur sama dengan 12 jam maka akan menampilkan gaji lembur sebesar
Rp.200.000, jika jam lembur lebih dari 12 jam makan akan menampilkan gaji
lembur sebesar Rp.300.000! */