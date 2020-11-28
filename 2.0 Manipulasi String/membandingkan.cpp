#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int kondisi;
    char kata1[31];
    char kata2[31];

    cout << "Masukkan kata pertama : "; fflush(stdin); cin.get(kata1, 30);
    cout << "Masukkan kata kedua : "; fflush(stdin); cin.get(kata2, 30);
    
    kondisi = strcmp(kata1, kata2);

    if (kondisi > 0) {
        cout << kata1 << " lebih besar daripada " << kata2 << "(tidak sama)" << endl;
    } else if (kondisi == 0) {
        cout << kata1 << " sama dengan " << kata2 << endl;
    } else {
        cout << kata1 << " lebih kecil daripada " << "(tidak sama)" << kata2 << endl;
    }

    return 0;
}

/* Menerima 2 buah masukan berupa string dan menampilkan
hasil perbandingan dari kedua string tersebut */