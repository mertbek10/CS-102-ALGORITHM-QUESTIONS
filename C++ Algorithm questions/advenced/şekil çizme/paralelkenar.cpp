//sayilarla paralelkenar
#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "kucuk bir sayi girin: ";
    cin >> sayi;

    for (int i = 1; i <= sayi; i++) {
        // Boşlukları ekle
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        // Sayıları ekle
        for (int k = 1; k <= sayi; k++) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}