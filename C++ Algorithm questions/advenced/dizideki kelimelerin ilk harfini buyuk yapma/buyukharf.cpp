// KELİMELERİN İLK HARFLERİNİ BUYUK YAPMA 
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string metin = "bu nasil metin icinde radar da var aba da akaaka level atla";
    for (int i = 0; metin[i] != '\0'; i++)
    {
        if (i == 0)
        {
            char x = metin[i] - 'a' + 'A';
            metin[i] = x;
            cout<<x<<"\t";

        }

        if (metin[i] == ' ' && metin[i + 1] <= 'z' && metin[i + 1] >= 'a')
        {
            char x = metin[i + 1] - 'a' + 'A';
            cout << x << "\t";
            metin[i + 1] = x;
        }
    }
    cout <<endl<< metin;

    return 0;
}