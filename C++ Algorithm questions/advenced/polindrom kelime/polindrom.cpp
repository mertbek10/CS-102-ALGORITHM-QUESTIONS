// POLİNDROM KELİME TERSTEN YAZİLİSİYLA AYNİ OLAN KELİMEDİR
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string metin = "merhaba ben celal lol bir radar poli sayidir kek.";
    string kelime = "";
    string array[100];
    int j = 0;
    for (int i = 0; metin[i] != '\0'; i++)
    {
        if (metin[i] != ' ' && metin[i] != '.')
        {
            kelime =kelime+metin[i];
        }
        else
        {
            
            int ilk = 0, son = kelime.length() - 1;
            bool pol = false;
            while (ilk < son)
            {
                if (kelime[ilk] == kelime[son])
                {
                
                    pol = true;
                }
                ilk++;
                son--;
            }
            if (pol)
            {
                cout << kelime << endl;
            }
           
           kelime = "";
        }
    }

    return 0;
}