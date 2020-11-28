#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char kata[31];

    cout << "Masukkan kata : "; fflush(stdin); cin.get(kata, 30);
    cout << "Uppercase : " << strupr(kata) << endl;
    cout << "Lowercase : " << strlwr(kata) << endl;

    return 0;
}

/* Menerima sebuah masukan berupa string dan menampilkan
uppercase dan lowercase dari string tersebut */