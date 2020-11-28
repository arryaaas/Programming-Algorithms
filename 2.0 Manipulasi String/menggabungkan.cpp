#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char kata1[31];
    char kata2[31];

    cout << "Masukkan kata pertama : "; fflush(stdin); cin.get(kata1, 30);
    cout << "Masukkan kata kedua : "; fflush(stdin); cin.get(kata2, 30);
    cout << "Hasil " << strcat(kata1, kata2) << endl;

    return 0;
}

/* Menerima 2 buah masukan berupa string dan menampilkan
hasil penggabungan dari kedua string tersebut */