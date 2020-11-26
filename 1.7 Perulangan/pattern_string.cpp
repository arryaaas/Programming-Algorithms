#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int i, j, maks, size;

    string tabStr[10];

    j = 0;

    for (i = 0; i < 10; i++) {
        cout << "Masukkan kata : "; cin >> tabStr[i];
    }

    cout << endl;

    for (i = 0; i < 10; i++) {
        if (tabStr[i].length() > maks) {
            maks = tabStr[i].length();
        }
    }

    for (i = 0; i < 10; i++) {
        while (tabStr[i].length() != maks) {
            tabStr[i].append(" ");
        }
    }

    do {
        for (i = 0; i < 10; i++) {
            cout << " " << tabStr[i][j] << " ";
        }
        j += 1;
        cout << endl;
    } while (j < maks);

    cout << endl;

    return 0;
}


/* Menampilkan pola tampilan array of string sebagai berikut
(satu kolom vertikal ke bawah adalah satu string) :

    h   a   a   m   l   y   t   d   t   s
    i   d   n   a   a   a   e   a   e   e
    d   a   u   r   k   n   r   n   t   m
    u   l   g   i   u   g   b       a   a
    p   a   e       k       a       p   n
        h   r       a       i           g
            a       n       k           a
            h                           t

*/