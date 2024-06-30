// KELİMELERİ TERSTEN YAZDIRMA
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string metin = "bu nasil metin icinde radar da var aba da akaaka level atla.";
    string kelime = "";
    string arr[100];
    int kelimesayisi = 0;
    for (int i = 0; metin[i] != '\0'; i++)
    {
        if (metin[i] != ' ' && metin[i] != '.')
        {
            kelime = kelime + metin[i];
        }
        else
        {

            arr[kelimesayisi] = kelime;
            kelimesayisi++;
            kelime = "";
        }
    }
    cout << kelimesayisi<<endl;
    for (int i = 0; i < kelimesayisi; i++)
    {
        kelime = arr[i];
        for (int a = kelime.length() - 1; a >= 0; a--)
        {
            cout << kelime[a];
        }
        cout << " ";
    }
    return 0;
}