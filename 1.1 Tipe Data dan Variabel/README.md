# Tipe Data dan Variabel

**Tipe data** ada banyak macamnya. Berikut adalah macam-macam tipe data :
1. Integer (Bilangan Bulat)
2. Float (Bilangan Pecahan)
3. String (Kumpulan Karakter)
4. Char (Karakter)

Cara pendeklarasiannya adalah sebagai berikut :

```cpp
int umur;
float berat_badan;
String nama;
char gender;
```

**Konstanta** adalah jenis identifier (pengenal) yang bersifat konstan atau tetap (nilainya tidak bisa diubah).

```cpp
// Menggunakan #define
#define nama_konstanta nilai_konstanta;
#define nama_konstanta nilai_konstanta

// Menggunakan const
const tipe_data nama_konstanta = nilai_konstanta;
```

**Variabel** berbeda dengan konstanta. Variabel mempunyai nilai yang dinamis (nilai variabel dapat diubah sesuai kebutuhan dalam program).

```cpp
tipe_data nama_variabel;
tipe_data nama_variabel1, nama_variabel2, nama_variabel3;
```

Variabel terbagi menjadi tiga macam, yaitu :
1. **Variabel Global** adalah variabel yang dikenali oleh seluruh lingkungan program dan dideklarasikan di luar seluruh fungsi yang ada.
2. **Variabel Lokal** adalah variabel yang hanya dikenali di dalam fungsi yang menjadi tempat variabel tersebut dideklarasikan.
3. **Variabel Statis** adalah variabel yang nilainya akan terus disimpan sampai eksekusi program selesai.
    
Cara pendeklarasian variabel statis adalah sebagai berikut : 

```cpp
static tipe_data nama_variabel;
```
