#include <iostream>
using namespace std;

// Tanda & berarti referensi ke variabel asli
void naikkanGaji (int &gaji) {
    gaji += 1000;
}

int main() {
    int gajiSaya = 5000;
    naikkanGaji (gajiSaya) ; // Variabel gajiSaya akan berubah permanen
    cout << "Gaji sekarang: " << gajiSaya << endl; // Output: Gaji sekarang: 6000
    return 0;
}