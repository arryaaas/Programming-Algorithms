#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char kata[31];

    cout << "Masukkan kata : "; fflush(stdin); cin.get(kata, 30);
    cout << "Panjang kata adalah " << strlen(kata) << endl;

    return 0;
}

/* Menerima sebuah masukan berupa string dan menampilkan
panjang dari string tersebut */