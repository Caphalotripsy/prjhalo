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

    
    return 0;
}