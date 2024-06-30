// //MEİTNDE EN ÇOK GEÇEN HARFİ BULMA
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "merhaba ben mert";
    int tekrar = 0, maxtekrar = 0;
    char karakter, last;

    for (int i = 0; i < 18; i++)
    {
        tekrar = 0;
        for (int j = i; j < 18; j++)
        {
            if (str[i] == str[j])
            {
                karakter = str[i];
                tekrar++;
            }
        }
        if (tekrar > maxtekrar)
        {
            maxtekrar = tekrar;
            last = karakter;
        }
    }
    cout << last << endl
         << maxtekrar;

    return 0;
}