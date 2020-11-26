#include <iostream>

using namespace std;

int main() {
    char tabChar[5];

    cout << "Array char berisi 5 elemen" << endl;
    cout << "Elemen ke-1 : "; cin >> tabChar[0];
    cout << "Elemen ke-2 : "; cin >> tabChar[1];
    cout << "Elemen ke-3 : "; cin >> tabChar[2];
    cout << "Elemen ke-4 : "; cin >> tabChar[3];
    cout << "Elemen ke-5 : "; cin >> tabChar[4];
    cout << endl;

    cout << "Isi elemen ke-1 : " << tabChar[0] << endl;
    cout << "Isi elemen ke-2 : " << tabChar[1] << endl;
    cout << "Isi elemen ke-3 : " << tabChar[2] << endl;
    cout << "Isi elemen ke-4 : " << tabChar[3] << endl;
    cout << "Isi elemen ke-5 : " << tabChar[4] << endl;

    return 0;
}

/* Array berisi 5 elemen bertipe karakter. Buat masukan untuk mengisi
ke-5 elemen tersebut dan kemudian tamplikan kembali isi array tersebut! */