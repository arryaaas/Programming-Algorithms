#include <iostream>

using namespace std;

int main() {
    int bilangan = 24;
    int *pbilangan = &bilangan;

    cout << "Tanpa pointer" << endl;
    cout << "Bilangan : " << bilangan << endl;
    cout << "Alamat : " << &bilangan << endl;

    cout << "Dengan Pointer" << endl;
    cout << "Bilangan : " << *pbilangan << endl;
    cout << "Alamat : " << pbilangan << endl; 

    return 0;
}

/* Mengisi alamat suatu variabel pada variabel pointer
lalu menampilkan nilai dan alamatnya dengan dan tanpa
pointer */