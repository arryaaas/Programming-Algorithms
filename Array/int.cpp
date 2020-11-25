#include <iostream>

using namespace std;

int main() {
    int tabInt[5], jumlah;

    cout << "Array integer berisi 5 elemen" << endl;
    cout << "Elemen ke-1 : "; cin >> tabInt[0];
    cout << "Elemen ke-2 : "; cin >> tabInt[1];
    cout << "Elemen ke-3 : "; cin >> tabInt[2];
    cout << "Elemen ke-4 : "; cin >> tabInt[3];
    cout << "Elemen ke-5 : "; cin >> tabInt[4];
    cout << endl;

    jumlah = tabInt[0] + tabInt[1] + tabInt[2] + tabInt[3] + tabInt[4];

    cout << "Hasil penjumlahan ke-5 elemen adalah " << jumlah << endl;

    return 0;
}

/* Array berisi 5 elemen bertipe integer. Buat masukan untuk mengisi
ke-5 elemen tersebut dan kemudian tamplikan hasil penjumlahan ke-5
elemen tersebut! */