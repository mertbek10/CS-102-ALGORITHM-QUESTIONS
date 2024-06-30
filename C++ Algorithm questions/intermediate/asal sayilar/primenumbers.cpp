//1 den yüze kadar olan asal sayıları yazdır
#include<iostream>

using namespace std;
int main()
{
    int sayi,i,kontrol,sayac;
    sayi=2;
    
    while (sayi<100)
    {

        sayac=0;
        kontrol=0;
        for(i=2; i<sayi; i++)
        {
            kontrol= sayi%i;
            if(kontrol==0)
            {
                sayac++;
            }
        }
        if(sayac==0)
        {
            cout <<sayi <<endl;
            sayi++;
        }
        else
        {
         sayi++;
        }

    }

    return 0;
}