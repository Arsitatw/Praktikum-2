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
