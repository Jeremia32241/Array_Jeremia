#include <iostream>
using namespace std;

int main() {
    int angka[5];
    int jumlah = 0;
    double rata_rata;

    cout << "Masukkan 5 angka integer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }
    
    rata_rata= (double) jumlah / 5;
    
  
    cout << "Rata-rata: " << rata_rata<< endl;

    return 0;
}
