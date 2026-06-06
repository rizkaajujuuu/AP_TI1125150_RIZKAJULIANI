#include <iostream>
using namespace std;

// Prosedur tanpa parameter
void tampilkanMenu() {
    cout << "=== Program Kasir Sederhana ===" << endl;
    cout << "1. Sarden : Rp 10.000" << endl;
    cout << "2. Sabun  : Rp 50.000" << endl;
    cout << "3. Minyak : Rp 25.000" << endl;
    cout << "===============================" << endl;
}

// Fungsi dengan parameter dan nilai balik
int hitungTotal(int harga, int jumlah) {
    return harga * jumlah;
}

// Fungsi dengan parameter dan nilai balik
double hitungDiskon(double total) {
    if (total > 100000) {
        return total * 0.1;
    } else {
        return 0;
    }
}

// Prosedur dengan parameter
void cetakStruk(string barang, int harga, int jumlah, int total, double diskon, double pajak, double bayar) {

    cout << "\n====== STRUK ======" << endl;
    cout << "Barang   : " << barang << endl;
    cout << "Harga    : Rp " << harga << endl;
    cout << "Jumlah   : " << jumlah << endl;
    cout << "Total    : Rp " << total << endl;
    cout << "Diskon   : Rp " << diskon << endl;
    cout << "Pajak (11%)   : Rp " << pajak << endl;
    cout << "Bayar    : Rp " << bayar << endl;
}

int main() {
    char ulang;
    do {
        int pilihan, jumlah, harga;
        string barang;

        tampilkanMenu();
        cout << "Pilih barang : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                barang = "Sarden";
                harga = 10000;
                break;
            case 2:
                barang = "Sabun";
                harga = 50000;
                break;
            case 3:
                barang = "Minyak";
                harga = 25000;
                break;
            default:
                cout << "Pilihan tidak tersedia!" << endl;
                return 0;
        }

        cout << "Jumlah Beli: ";
        cin >> jumlah;

        int total = hitungTotal(harga, jumlah);
        double diskon = hitungDiskon(total);
        double pajak = total * 0.11;
        double bayar = total - diskon + pajak;

        cetakStruk(barang, harga, jumlah, total, diskon, pajak, bayar);

        cout << "\nTransaksi lagi? (Y/T): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    cout << "Terima kasih telah berbelanja!" << endl;
    return 0;

}