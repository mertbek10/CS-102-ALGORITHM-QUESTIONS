#include <iostream>
#include <string>

using namespace std;

int main() {
    int satir_sayisi;
    
    // Kullanıcıdan kaç satır yazdırmak istediğini sor
    cout << "Kac satir yazdirmak istiyorsunuz? ";
    cin >> satir_sayisi;

    // 1. desen: dik ucgen
    cout << "1. Desen:" << endl;
    for (int i = 1; i <= satir_sayisi; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // 2. desen: çam ağacı
    cout << "\n2. Desen:" << endl;
    for (int i = 1; i <= satir_sayisi; ++i) {
        string bosluklar(satir_sayisi - i, ' ');
        string yildizlar(2 * i - 1, '*');
        cout << bosluklar << yildizlar << endl;
    }

    // 3. desen
    cout << "\n3. Desen:" << endl;
    for (int i = 1; i <= satir_sayisi; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }

   

    // 4. desen
    cout << "\n4. Desen:" << endl;
    for (int i = 1; i <= satir_sayisi; ++i) {
        string bosluklar(satir_sayisi - i, ' ');
        for (int j = 1; j <= i ; ++j) {
            cout << i;
        }
        cout << endl;
    }





    return 0;
}


