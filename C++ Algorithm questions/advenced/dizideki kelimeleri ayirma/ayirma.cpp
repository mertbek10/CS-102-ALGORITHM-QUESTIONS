// DİZİ ELEMANLARINI kelime kelime AYIRMA
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string metin = " ben beb lol metin icinde arabalara radar level atla.";
    string kelime = "";
    string array[1000];
    int j = 0;
    for (int i = 0; metin[i] != '\0'; i++)//enter a basana kadar
    {
        if (metin[i] != ' ' && metin[i] != '.')
            kelime = kelime + metin[i];

        else
        {
            array[j] = kelime;
            cout << array[j]<<endl;
            j++;
            kelime="";
        }

    }

    return 0;
}