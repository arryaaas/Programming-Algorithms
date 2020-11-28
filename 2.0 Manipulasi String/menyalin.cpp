#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n;
    char kata1[31];
    char kata2[31];

    cout << "Masukkan kata : "; fflush(stdin); cin.get(kata1, 30);
    cout << "Hasil : " << strcpy(kata2, kata1) << endl;

    cout << "Berapa karakter yang ingin disalin selanjutnya : "; cin >> n;

    strncpy(kata2, kata1, n);
    kata2[n] = '\0';

    cout << "Hasil : " << kata2 << endl;

    return 0;
}

/* Menerima 2 buah masukan berupa string dan interger (untuk 
berapa banyak karakter yang akan disalin) dan menampilkan hasil 
penyalinan dan penyalinan beberapa karakter dari string tersebut */