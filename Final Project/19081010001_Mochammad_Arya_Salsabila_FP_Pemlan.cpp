// Nama : Mochammad Arya Salsabila
// Npm   : 19081010001
// Kelas : Pemrograman Lanjut (D)
// Studi Kasus : Sistem Informasi Pendataan Pegawai Perusahaan

#include <iostream>
#include <fstream>

using namespace std;

// Deklarasi struct
typedef struct {
    char nip_pegawai[20];
    char nama_pegawai[30];
    char tempat_lahir[20];
    char tgl_lahir[30];
    char alamat[50];
    char jabatan[20];
    char status[20];
} data_pegawai;

// Prototype procedure input_data(), show_data(), 
// simpan_ke_file(), baca_dari_file()
void input_data(data_pegawai &pegawai);
void show_data(data_pegawai pegawai);
void simpan_ke_file();
void baca_dari_file();

// Fungsi main atau fungsi utama program
int main() {
    bool exit = false;

    while (!exit) {
        int choice;
        cout << "=================================================" << endl;
        cout << "| Sistem Informasi Pendataan Pegawai Perusahaan |" << endl;
        cout << "=================================================" << endl;
        cout << "| Menu :                                        |" << endl;
        cout << "| 1. Tambah Pegawai                             |" << endl;
        cout << "| 2. Lihat Pegawai                              |" << endl;
        cout << "| 3. Keluar                                     |" << endl;
        cout << "=================================================" << endl;
        cout << endl;

        cout << "Masukkan pilihan : "; 
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            simpan_ke_file();
            cout << "Data berhasil ditambahkan..." << endl << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            baca_dari_file();
            cout << "Data berhasil dibaca..." << endl << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            exit = true;
            cout << "Keluar dari program..." << endl << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Pilihan salah" << endl;
            system("pause");
            system("cls");
        }
    }

    return 0;
}

// Definisi procedure input_data(), show_data(), 
// simpan_ke_file(), baca_dari_file()
void input_data(data_pegawai &pegawai) {
    cout << "Nip pegawai    : ";
    fflush(stdin); cin.get(pegawai.nip_pegawai, 20);
    cout << "Nama pegawai   : ";
    fflush(stdin); cin.get(pegawai.nama_pegawai, 30);
    cout << "Tempat lahir   : ";
    fflush(stdin); cin.get(pegawai.tempat_lahir, 20);
    cout << "Tanggal lahir  : ";
    fflush(stdin); cin.get(pegawai.tgl_lahir, 30);
    cout << "Alamat         : ";
    fflush(stdin); cin.get(pegawai.alamat, 50);
    cout << "Jabatan        : ";
    fflush(stdin); cin.get(pegawai.jabatan, 20);
    cout << "Status pegawai : ";
    fflush(stdin); cin.get(pegawai.status, 20);
    cout << endl;
}

void show_data(data_pegawai pegawai) {
    cout << "Nip pegawai    : " << pegawai.nip_pegawai << endl;
    cout << "Nama pegawai   : " << pegawai.nama_pegawai << endl;
    cout << "Tempat lahir   : " << pegawai.tempat_lahir << endl;
    cout << "Tanggal lahir  : " << pegawai.tgl_lahir << endl;
    cout << "Alamat         : " << pegawai.alamat << endl;
    cout << "Jabatan        : " << pegawai.jabatan << endl;
    cout << "Status pegawai : " << pegawai.status << endl << endl;
}

void simpan_ke_file() {
    data_pegawai pegawai;
    
    // Untuk input data pegawai
    input_data(pegawai);

    ofstream file;
    file.open("data.txt", ios::binary | ios::app);

    // Menulis data pegawai ke file "data.txt"
    file.write((char*) &pegawai, sizeof(pegawai));
    file.close();
}

void baca_dari_file() {
    data_pegawai pegawai;

    ifstream file;
    file.open("data.txt", ios::binary);

    if (!file) {
        cout << "Belum ada data, silahkan tambahkan data terlebih dahulu...";
        cout << endl << endl;
    } else {
        // Membaca data pegawai dari file "data.txt"
        while (file.read((char *) &pegawai, sizeof(pegawai))) {
            // Untuk menampilkan data pegawai
            show_data(pegawai);
        }
    }

    file.close();
}