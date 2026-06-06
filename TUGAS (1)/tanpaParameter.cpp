#include <iostream>
using namespace std;

// Bentuk yang sangat umum
void salam () {
    cout << "Selamat Belajar C++!" << endl;
}

// Bentuk eksplisit (lebih formal dalam standar C lama)
void versiLama(void) {
    cout << "Ini juga bisa." << endl;
}

int main() {
    salam();
    return 0;
}