#include <iostream>

using namespace std;

int main() {
    string tabStr[5];

    cout << "Array string berisi 5 elemen" << endl;
    cout << "Elemen ke-1 : "; cin >> tabStr[0];
    cout << "Elemen ke-2 : "; cin >> tabStr[1];
    cout << "Elemen ke-3 : "; cin >> tabStr[2];
    cout << "Elemen ke-4 : "; cin >> tabStr[3];
    cout << "Elemen ke-5 : "; cin >> tabStr[4];
    cout << endl;

    cout << "Isi elemen ke-1 : " << tabStr[0] << endl;
    cout << "Isi elemen ke-2 : " << tabStr[1] << endl;
    cout << "Isi elemen ke-3 : " << tabStr[2] << endl;
    cout << "Isi elemen ke-4 : " << tabStr[3] << endl;
    cout << "Isi elemen ke-5 : " << tabStr[4] << endl;

    return 0;
}

/* Array berisi 5 elemen bertipe string. Buat masukan untuk mengisi
ke-5 elemen tersebut dan kemudian tamplikan kembali isi array tersebut! */