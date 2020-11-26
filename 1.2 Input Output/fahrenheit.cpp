#include <iostream>

using namespace std;

int main() {
    float celcius, fahrenheit;

    cout << "Masukkan suhu dalam derajat celcius : "; cin >> celcius;

    fahrenheit = ((9 * celcius) / 5) + 32;

    cout << celcius << " celcius = " << fahrenheit << " fahrenheit" << endl;

    return 0;
}

/* Menerima sebuah masukan berupa derajat celcius dan menampilkan hasil
bilangan masukan itu menjadi derajat fahrenheit! */