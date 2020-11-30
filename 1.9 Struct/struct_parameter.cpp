#include <iostream>

using namespace std;

typedef struct {
    char npm[20];
    char nama[30];
    char alamat[50];
    char telp[20];
}data_mahasiswa;

// data_mahasiswa input_data(data_mahasiswa mahasiswa) {
//     cout << "Masukkan Nama : "; fflush(stdin);
//     cin.get(mahasiswa.nama, 30);
//     return mahasiswa;
// }

void input_data(data_mahasiswa &mahasiswa) {
    cout << "Masukkan Npm : "; fflush(stdin);
    cin.get(mahasiswa.npm, 20);
    cout << "Masukkan Nama : "; fflush(stdin);
    cin.get(mahasiswa.nama, 30);
    cout << "Masukkan Alamat : "; fflush(stdin);
    cin.get(mahasiswa.alamat, 50);
    cout << "Masukkan Telp : "; fflush(stdin);
    cin.get(mahasiswa.telp, 20);
}

void show_data(data_mahasiswa mahasiswa) {
    cout << "Npm : " << mahasiswa.npm << endl;
    cout << "Nama : " << mahasiswa.nama << endl;
    cout << "Alamat : " << mahasiswa.alamat << endl;
    cout << "Telp : " << mahasiswa.telp << endl;
}

int main() {
    data_mahasiswa mahasiswa;

    // Menggunakan fungsi dengan nilai return
    // mahasiswa = input_data(mahasiswa);

    // Menggunakan prosedur dan pointer
    input_data(mahasiswa);

    show_data(mahasiswa);

    return 0;
}