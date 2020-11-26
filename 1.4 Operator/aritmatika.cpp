#include <iostream>

using namespace std;

int main() {
    float bil1, bil2;

    cout << "Masukkan bilangan pertama : "; cin >> bil1;
    cout << "Masukkan bilangan kedua : "; cin >> bil2;

    cout << bil1 << " + " << bil2 << " = " << bil1 + bil2 << endl;
    cout << bil1 << " x " << bil2 << " = " << bil1 * bil2 << endl;

    if (bil2 >= 1) {
        cout << bil1 << " : " << bil2 << " = " << bil1 / bil2 << endl;
    }

    cout << bil1 << " - " << bil2 << " = " << bil1 - bil2 << endl;

    return 0;
}

/* Menerima dua masukan berupa integer lalu menampilkan hasil
penambahan kedua bilangan, hasil perkalian kedua bilangan, hasil
pembagian kedua bilangan (masukan pembagi tidak boleh nol), dan 
hasil pengurangan kedua bilangan! */