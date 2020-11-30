#include <iostream>
#include <iomanip>

using namespace std;

// Prototype fungsi atau prosedur

void pesanan(int *menu, int *porsi, int *banyak_pesanan, int *status_pesanan);

int penentuan_harga(int menu, int porsi, float *diskon, int banyak_pesanan);

float penentuan_pajak(int status_pesanan, float total_harga_awal);

void cetak_nota(float *pajak, float *diskon, float *total_harga_awal, float *total_harga_akhir);

// Fungsi utama program

int main() {
    int menu, porsi, banyak_pesanan;
    int status_pesanan, harga_makanan;
    float pajak, diskon;
    float total_harga_awal, total_harga_akhir; 

    diskon = 0;
    total_harga_awal = 0;
    total_harga_akhir = 0;

    pesanan(&menu, &porsi, &banyak_pesanan, &status_pesanan);

    harga_makanan = penentuan_harga(menu, porsi, &diskon, banyak_pesanan);

    total_harga_awal = (harga_makanan * banyak_pesanan) - diskon;

    pajak = penentuan_pajak(status_pesanan, total_harga_awal);

    total_harga_akhir = total_harga_awal + pajak;

    cetak_nota(&pajak, &diskon, &total_harga_awal, &total_harga_akhir);

    return 0;
}

// Deklarasi fungsi atau prosedur

void pesanan(int *menu, int *porsi, int *banyak_pesanan, int *status_pesanan) {
    cout << "Menu Makanan : " << endl;
    cout << "1. Cap Cay Goreng" << endl;
    cout << "2. Kakap Asam Manis" << endl;
    cout << "3. Putung Hay" << endl;
    cout << "Masukkan pilihan makanan : ";
    cin >> *menu;
    cout << endl;

    cout << "Pilihan Porsi : " << endl;
    cout << "1. Kecil" << endl;
    cout << "2. Sedang" << endl;
    cout << "3. Besar" << endl;
    cout << "Masukkan pilihan porsi : ";
    cin >> *porsi;
    cout << endl;

    cout << "Masukkan banyak pesanan : ";
    cin >> *banyak_pesanan;
    cout << endl;

    cout << "Status Pesanan : " << endl;
    cout << "1. Makan Ditempat" << endl;
    cout << "2. Dibungkus" << endl;
    cout << "Masukkan status pesanan : ";
    cin >> *status_pesanan;
    cout << endl;
}

int penentuan_harga(int menu, int porsi, float *diskon, int banyak_pesanan) {
    int harga_makanan;

    if (menu == 1) {
        switch (porsi) {
            case 1:
                harga_makanan = 15000;
                break;
            case 2:
                harga_makanan = 20000;
                break;
            default:
                harga_makanan = 25000;
                break;
        }
    } else if (menu == 2) {
        switch (porsi) {
            case 1:
                harga_makanan = 30000;
                break;
            case 2:
                harga_makanan = 40000;
                break;
            default:
                harga_makanan = 50000;
                *diskon = 0.05 * harga_makanan * banyak_pesanan;
                break;
        }
    } else {
        switch (porsi) {
            case 1:
                harga_makanan = 10000;
                break;
            case 2:
                harga_makanan = 15000;
                break;
            default:
                harga_makanan = 20000;
                break;
        }
    }

    return harga_makanan;
}

float penentuan_pajak(int status_pesanan, float total_harga_awal) {
    float pajak;

    if (status_pesanan == 1) {
        pajak = total_harga_awal * 0.1;
    } else {
        pajak = 0;
    }

    return pajak;
}

void cetak_nota(float *pajak, float *diskon, float *total_harga_awal, float *total_harga_akhir) {
    cout << "Nota Pesanan" << endl;
    cout << "Diskon : Rp. " << setw(6) << *diskon << endl;
    cout << "Total  : Rp. " << setw(6) << *total_harga_awal << endl;
    cout << "Pajak  : Rp. " << setw(6) << *pajak << endl;
    cout << "Bayar  : Rp. " << setw(6) << *total_harga_akhir << endl;
    cout << endl;
}

/* Kasus menu makanan suatu restoran
------------------------------------------------------------
Menu Makanan            Porsi
                        Kecil       Sedang      Besar       
------------------------------------------------------------
1. Cap Cay Goreng       15000       20000       25000
2. Kakap Asam Manis     30000       40000       50000
3. Puyung Hay           10000       15000       20000
------------------------------------------------------------

Beberapa atruan yang berlaku direstoran ini, antara lain :

Apabila makanan yang dipesan dimakan ditempat maka pembeli
akan dikenakan pajak sebesar 10% dari total harga. Sedangkan 
apabila makanan dibungkus maka tidak dikenakan pajak.

Apabila memesan kakap asam manis dalam ukuran besar maka
mendapat diskon 5% dari harga kakap asam manis porsi besar
(perpotongnya).

Input :
1. Menu makanan
2. Porsi
3. Banyak pesanan
4. Status pesanan

Output :
1. Diskon
2. Total harga
3. Pajak
4. Bayar

*/