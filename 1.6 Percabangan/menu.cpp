#include <iostream>

using namespace std;

int main() {
    int menu, bil1, bil2;

    cout << "Operasi Aritmatika : " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. Pengurangan" << endl;
    cout << "Masukkan nomor pilihan : "; cin >> menu;
    cout << endl;

    cout << "Masukkan bilangan pertama : "; cin >> bil1;
    cout << "Masukkan bilangan kedua : "; cin >> bil2;
    cout << endl;

    switch (menu) {
        case 1:
            cout << bil1 << " + " << bil2 << " = " << bil1 + bil2 << endl;
            break;
        case 2:
            cout << bil1 << " x " << bil2 << " = " << bil1 * bil2 << endl;
            break;
        case 3:
            cout << bil1 << " - " << bil2 << " = " << bil1 - bil2 << endl;
            break;
        default:
            cout << "Menu tidak valid" << endl;
    }

    return 0;
}

/* Menerima menu yang dapat berisi 1, 2, dan 3 dan dua buah masukan
bilangan, jika menu sama dengan 1 maka akan menampilkan hasil dari
bilangan 1 ditambah dengan bilangan 2, jika menu sama dengan 2 maka
akan menampilkan hasil dari bilangan 1 dikali dengan bilangan 2, jika
menu sama dengan 3 maka akan menampilkan hasil dari bilangan 1 dikurangi
bilangan 2! */