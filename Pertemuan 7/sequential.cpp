#include <iostream>
using namespace std;

int main() {
    int n, key, posisi = -1;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    cout << "Masukkan elemen data: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i << ": ";
        cin >> data[i];
    }

    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> key;

    // TODO : Proses pencarian sequential/linear
    for(int i = 0; i < n; i++){ // 1, 3, 6, 7, 9 key 7
        if(data[i] == key){
            posisi = i; // kita simpan posisi ketika ketemu
            break; // karna udah ketemu
        }
    }

    // Output hasil
    if (posisi != -1)
        cout << "\nData ditemukan di indeks ke-" << posisi << endl;
    else
        cout << "\nData tidak ditemukan." << endl;

    return 0;
}