//KELEBEK ÇİZME
#include <iostream>
using namespace std;

int main() {
    int satir_sayisi;
    cout << "Satir sayisini giriniz: ";
    cin >> satir_sayisi;

    // Üst kısmı çiz
    for (int i = 1; i <= satir_sayisi / 2; ++i) {
        // Sol kısım
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Boşluk
        for (int k = 1; k <= satir_sayisi - 2 * i; ++k) {
            cout << " ";
        }
        // Sağ kısım
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Alt kısmı çiz
    for (int i = satir_sayisi / 2-1; i >= 1; --i) {
        // Sol kısım
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Boşluk
        for (int k = 1; k <= satir_sayisi - 2 * i; ++k) {
            cout << " ";
        }
        // Sağ kısım
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}