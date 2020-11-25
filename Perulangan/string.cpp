#include <iostream>

using namespace std;

int main() {
    int i, j, k;

    string tabStr[5];

    for (i = 0; i < 5; i++) {
        cout << "Masukkan kata : "; cin >> tabStr[i];
    }

    cout << endl;

    for (i = 0; i < 5; i++) {

        k = tabStr[i].length();

        if ((tabStr[i][0] == 'a') || 
            (tabStr[i][0] == 'A') ||
            (tabStr[i][0] == 'u') || 
            (tabStr[i][0] == 'U')) {
            for (j = (k - 1); j >= 0; j--) {
                cout << tabStr[i][j];
            }
            cout << endl;
        }

        if ((tabStr[i][0] == 'i') || (tabStr[i][0] == 'I')) {
            for (j = (k / 2); j >= 0; j--) {
                cout << tabStr[i][j];
            }
            for (j = ((k / 2) + 1); j < k; j++) {
                cout << tabStr[i][j];
            }
            cout << endl;
        }

        if ((tabStr[i][0] == 'e') || 
            (tabStr[i][0] == 'E') ||
            (tabStr[i][0] == 'o') || 
            (tabStr[i][0] == 'O')) {
            cout << tabStr[i] << endl;
        }
    }
}

/* Mengisi dan memproses array berisi string dan menuliskan ke layar
isi string dengan ketentuan sebagai berikut :

String yang diawali huruf A harus ditulis dari belakang, misal "Alpha"
maka akan menampilkan "ahplA" (tangani huruf "a" dan "A") 

Sting yang diawali huruf I harus ditulis dari tengah, misal "Insan"
maka akan menampilkan "snIan" (tangani huruf "i" dan "I"), dari tengah 
ke depan ditulis dari tengah dilanjutkan dengan dari tengah ke belakang

String yang diawali huruf U harus ditulis dari belakang, misal "Ulfa"
maka akan menampilkan "aflU" (tangani huruf "u" dan "U")

String yang diawali huruf E dan O harus ditulis dari depan, misal "Elang"
maka akan menampilkan "Elang" (tangani huruf "o" dan "O", tangani huruf
"e" dan "E") */