# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>

# Dasar Teori

Array adalah struktur data yang menyimpan data-data bertipe sama dalam urutan tertentu. Array dapat dianalogikan sebagai sebuah loker yang memiliki sederetan kotak penyimpanan yang diberi nomor berurutan. Data-data dalam array disebutelemen array.Dengan array setiap elemen bisa diakses langsung melalui indeksnya, berlebihan lain dari array adalah kita bisa memakai sejumlah variable dengan nama yang sama asalkan variable tersebut dalam indeks yang berbeda.[1] 



### 1. Array Satu Dimensi
Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan
untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu.


### 2. Array Dua Dimensi
Array dua dimensi adalah sebutan untuk array yang penomoran index-nya menggunakan 2 buah angka. Analogi yang sering dipakai seperti titik koordinat dalam diagram kartesius. Analoginya adalah matriks. Dalam matematika, matrik terdiri dari kolom dan baris. Kembali, untuk menentukan nilai dari sebuah matriks, kita harus sebut secara berpasangan seperti baris 1 kolom 2, atau baris 3 kolom 1. Konsep seperti inilah yang menjadi dasar dari array 2 dimensi.

Untuk membuat array 2 dimensi di dalam bahasa C, kita membuat 2 kali tanda kurung siku setelah nama variabel, seperti contoh berikut:

int bilangan[2][2];

Baris diatas akan membuat array 2 dimensi dengan nama variabel: bilangan. Variabel bilangan ini akan berisi 4 element (2 x 2). Atau jika diibaratkan sebagai matriks, disini kita membuat matriks 2 x 2.

### 3. Array Tiga Dimensi
Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama[2] . Penggunaan dari array 3 dimensi adalah seperti diagram kartesius 3 dimensi (dimensi ruang) yang butuh sumbu x (lebar), y (tinggi), dan z (kedalaman)..

## Guided
### 1. Program Imput Array 3 Dimensi
```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi
    int arr[2][3][3]; 

    // Input
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output 
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilkan 
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
Program ini memiliki tujuan untuk memungkinkan pengguna untuk menginput dan menyimpan data dalam sebuah array 3-dimensi. Setelah itu, program menggunakan algoritma Bubble Sort untuk mengurutkan data dan menampilkan data yang telah terurut.

### 2. Program Mencari Nilai Maksimal pada Array
```C++
#include <iostream>
using namespace std;
int main(){
    int maks, a, lokasi;
    cout<< "Masukan panjang array: ";
    cin >> a;

    if (a <= 0){
        cout << "Panjnag array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk identi error
    }
    int array [a];

    cout << "Masukan" << a << "angka\n";

    for (int i = 0; i < a; i++){
        cout << "Array" << (i + 1)<< ":";
        cin >> array [i];
    }
    maks = array [0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array [i] > maks){
            maks = array [i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah "<< maks << " berada di Array ke " << (lokasi + 1) << endl;

    return 0;
}
```
Program ini akan meminta user untuk memasukkan panjang array dan angka-angka untuk diisi ke dalam array tersebut. Kemudian, program mencari nilai maksimum dari array yang telah diisi dan menampilkan nilai maksimum beserta posisinya di dalam array. Jika panjang array yang dimasukkan tidak valid (kurang dari atau sama dengan 0), program akan memberikan pesan error.

## Unguided
### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Masukkan data array (gunakan koma sebagai pemisah): ";
    getline(cin, input);

    stringstream ss(input);
    int temp;
    char comma;

    // Membaca elemen-elemen array satu per satu
    cout << "Data Array: ";
    while (ss >> temp) {
        cout << temp << " ";
        ss >> comma; // Membuang koma
    }
    cout << endl;

    // Mengembalikan ss ke awal untuk membaca kembali
    ss.clear();
    ss.seekg(0);

    // Menampilkan elemen-elemen array ganjil
    cout << "\nData Array Ganjil: ";
    while (ss >> temp) {
        if (temp % 2 != 0) {
            cout << temp << " ";
        }
        ss >> comma; // Membuang koma
    }
    cout << endl;

    // Mengembalikan ss ke awal untuk membaca kembali
    ss.clear();
    ss.seekg(0);

    // Menampilkan elemen-elemen array genap
    cout << "\nData Array Genap: ";
    while (ss >> temp) {
        if (temp % 2 == 0) {
            cout << temp << " ";
        }
        ss >> comma; // Membuang koma
    }
    cout << endl;

    return 0;
}
```
#### Output
![Screenshot 202024-04-01 20210555](https://github.com/Arsitatw/Praktikum-2/blob/master/Screenshot%202024-04-01%20210555.png)

Kode program ini menampilkan fungsi untuk membaca dan menampilkan elemen-elemen array dari input pengguna. Program menggunakan stringstream untuk membaca dan memisahkan elemen array yang dipisahkan oleh koma. while (ss >> temp) digunakan untuk membaca elemen-elemen array yang ganjil dan genap. if (temp % 2 != 0) digunakan untuk memeriksa apakah elemen ganjil. if (temp % 2 == 0) digunakan untuk memeriksa apakah elemen genap. Program ini akan menampilkan elemen-elemen array yang ganjil dan genap, yang dipisahkan oleh koma.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
#include <iostream>
using namespace std;

int main()
{
    int x_size, y_size, z_size;

    // Meminta input ukuran array
    cout << "Masukkan jumlah elemen array (x y z): ";
    cin >> x_size >> y_size >> z_size;

    // Deklarasi array sesuai ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Input elemen
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
#### Output

![Screenshot 202024-04-01 20221805](https://github.com/Arsitatw/Praktikum-2/blob/master/Screenshot%202024-04-01%20221805.png)

Program tersebut adalah sebuah program dalam bahasa C++ yang meminta pengguna memasukkan ukuran tiga dimensi untuk sebuah array dan kemudian mengisi array tersebut dengan nilai yang dimasukkan oleh pengguna. Setelah itu, program akan menampilkan isi array dalam bentuk tiga dimensi.

Singkatnya:

- Program meminta pengguna untuk memasukkan ukuran array tiga dimensi x_size, y_size, dan z_size.
- Program mendeklarasikan array arr dengan ukuran yang sesuai dengan input pengguna.
- Program mengisi array dengan nilai yang dimasukkan oleh pengguna menggunakan nested loop.
- Program menampilkan isi array dalam bentuk tiga dimensi menggunakan nested loop.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
```C++
#include <iostream>
#include <limits>

using namespace std;

double hitungMaksimum(double arr[], int n) {
    double maksimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

double hitungMinimum(double arr[], int n) {
    double minimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

double hitungRataRata(double arr[], int n) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }
    return total / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array yang dimasukkan:";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;

    cout << "Nilai maksimum: " << hitungMaksimum(arr, n) << endl;
    cout << "Nilai minimum: " << hitungMinimum(arr, n) << endl;
    cout << "Nilai rata-rata: " << hitungRataRata(arr, n) << endl;

    return 0;
}
```

#### Output
![Screenshot 202024-04-01 20232111](https://github.com/Arsitatw/Praktikum-2/blob/master/Screenshot%202024-04-01%20232111.png)

Program ini adalah sebuah program dalam bahasa C++ yang melakukan operasi statistik sederhana terhadap sebuah array bilangan floating point, termasuk perhitungan nilai maksimum, minimum, dan rata-rata dari elemen-elemennya. Untuk memastikan bahwa input pengguna adalah angka, program menggunakan cin.ignore(numeric_limits<streamsize>::max(), '\n') setelah menerima input untuk membersihkan buffer input. Program menggunakan array dinamis C++, di mana ukuran array ditentukan oleh input pengguna pada saat runtime. Ini dimungkinkan oleh fitur array variabel panjang (Variable Length Array/VLA) yang merupakan ekstensi dari standar C++ pada beberapa kompiler tertentu.

## Referensi
[1] Arraffi, Adzriel. "Tipe data larik (array)." (2019).
[2] Universitas Mitra Indonesia, M. Aldi Pratama, Array,2020.
