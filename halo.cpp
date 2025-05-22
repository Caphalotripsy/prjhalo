#include <iostream>

using namespace std;

int main () {
    /*
    cout << "Poliban juara";
    cout << "Barca Juara ";
    cout << "Perubahan 1";
    cout << "Masih perubahan 1 tapi tetap biar ada varian aja";
    */
    int jumlah;

    //Jumlah nama yang akan dimasukkan
    cout << "Masukkan jumlah nama yang ingin dimasukkan: ";
    cin >> jumlah;

    //inisialisasi array dinamis menggunakan pointer
    string* nama = new string[jumlah];

    // Fungsi input nama
    cout << "Masukkan " << jumlah << " nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }
    
    // Output nama - nama yang sudah dimasukkan
    cout << "\nDaftar nama yang dimasukkan:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "- " << nama[i] << endl;
    }

    // Membersihkan memori
    delete[] nama;
    return 0;
}