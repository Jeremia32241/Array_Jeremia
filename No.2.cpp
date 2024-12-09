#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    float average;

    // Meminta pengguna memasukkan jumlah elemen
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    // Deklarasi array
    int arr[n];

    cout << "Masukkan nilai elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    average = (float)sum / n;

    cout << "Rata-rata dari elemen array adalah: " << average << endl;

    return 0;
}