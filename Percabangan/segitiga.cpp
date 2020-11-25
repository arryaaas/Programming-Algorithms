#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan 3 buah sisi segitiga lalu tekan enter untuk setiap sisi" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if ((a > b) && (a > c)) {
        if ((a * a) == (b * b) + (c * c)) {
            cout << "Termasuk segitiga siku-siku" << endl;
        } else {
            cout << "Bukan termasuk segitiga siku-siku" << endl;
        }
    } else if ((b > a) && (b > c)) {
        if ((b * b) == (a * a) + (c * c)) {
            cout << "Termasuk segitiga siku-siku" << endl;
        } else {
            cout << "Bukan termasuk segitiga siku-siku" << endl;
        }
    } else {
        if ((c * c) == (a * a) + (b * b)) {
            cout << "Termasuk segitiga siku-siku" << endl;
        } else {
            cout << "Bukan termasuk segitiga siku-siku" << endl;
        }
    }

    return 0;
}

/* Menerima masukan berupa tiga buah sisi segitiga, periksa
apakah segitiga masukan merupakan segitiga siku-siku atau bukan */