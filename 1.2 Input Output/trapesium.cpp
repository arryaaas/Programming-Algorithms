#include <iostream>

using namespace std;

int main() {
    float sisi_atas, sisi_alas, tinggi, luas;

    cout << "Masukkan sisi atas : "; cin >> sisi_atas;
    cout << "Masukkan sisi alas : "; cin >> sisi_alas;
    cout << "Masukkan tinggi : "; cin >> tinggi;

    luas = ((sisi_atas + sisi_alas) * tinggi) / 2;

    cout << "Luas trapesium adalah " << luas << " cm^2" << endl;

    return 0;
}

/* Menerima tiga buah masukan bilangan bulat berupa sisi atas, sisi alas,
dan tinggi trapesium dan menampilkan hasil luas trapesium! */