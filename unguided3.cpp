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
