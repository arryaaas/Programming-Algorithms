#include <iostream>

using namespace std;

int main() {
    float celcius, reamur;

    cout << "Masukkan suhu dalam derajat celcius : "; cin >> celcius;

    reamur = ((4 * celcius) / 5);

    cout << celcius << " celcius = " << reamur << " reamur" << endl;

    return 0;
}

/* Menerima sebuah masukan berupa derajat celcius dan menampilkan hasil
bilangan masukan itu menjadi derajat reamur! */