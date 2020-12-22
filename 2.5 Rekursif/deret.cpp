#include <iostream>

using namespace std;

void deret(int arr[], int n, int i) {
    
    if (i == 0) {
        arr[i] = 0;
        deret(arr, n, i+1);
    } else if (i == 1) {
        arr[i] = 1;
        deret(arr, n, i+1);
    } else if (i == 2) {
        arr[i] = 2;
        deret(arr, n, i+1);
    } else if (i == 3) {
        arr[i] = 3;
        deret(arr, n, i+1);
    } else {
        if (i < n) {
            arr[i] = arr[i-4] + arr[i-2];
            deret(arr, n, i+1);
        }
    }
}

int main() {

    int i, n;
    
    cout << "Berapa banyak data : "; cin >> n;
    
    int arr[n];
    
    deret(arr, n, 0);
    
    for (i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    
    return 0;
}

/* Prosedur atau fungsi rekursif untuk menyelesaikan aturan deret dimana
deret dengan posisi genap adalah hasil pertambahan dua posisi denap di
depannya. Misalnya angka ke-4 adalah hasil pertambahan angka ke-2 dan 
ke-0. Dan angka ke-5 adalah hasil pertambahan dari angka ke-1 dan angka
ke-3. Angka ke 0 akan selalu berisi angka 0, angka ke 1 akan selalu berisi 
angka 1,angka ke 2 akan selalu berisi angka 2, angka ke 3 akan selalu berisi
angka 3! */