#include <iostream>

#define maks 100

using namespace std;

typedef struct {
    string npm;
    string nama;
    string alamat;
    string telp;
    string email;
} data_mahasiswa;

data_mahasiswa mahasiswa[maks];

int main() {
    
    int i, banyak;
    
    cout << "Banyak data : ";
    cin >> banyak;
    cout << endl;
    
    for (i = 0; i < banyak; i++) {
        cout << "Input Data Ke-" << i+1 << endl;
        cout << "NPM : "; fflush(stdin);
        getline(cin, mahasiswa[i].npm);
        cout << "Nama : "; fflush(stdin);
        getline(cin, mahasiswa[i].nama);
        cout << "Alamat : "; fflush(stdin);
        getline(cin, mahasiswa[i].alamat);
        cout << "No Telp : ";
        getline(cin, mahasiswa[i].telp);
        cout << "Email : "; fflush(stdin);
        getline(cin, mahasiswa[i].email);
        cout << endl;
        
        cout << "Output Data Ke-" << i+1 << endl;
        cout << "NPM : " << mahasiswa[i].npm << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Alamat : " << mahasiswa[i].alamat << endl;
        cout << "No Telp : " << mahasiswa[i].telp << endl;
        cout << "Email : " << mahasiswa[i].email << endl << endl;
    }
    
    return 0;
}