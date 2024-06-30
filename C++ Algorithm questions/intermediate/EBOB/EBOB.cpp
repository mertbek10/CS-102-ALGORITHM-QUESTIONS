#include<iostream>
using namespace std;

int main()
{
    int sayi1,sayi2,i,j,ebob=1,carpim, kalan,sayac=2;

    cout<<"ebobunu hesaplamak istediginiz sayilari giriniz : ";
    cin>>sayi1 >> sayi2;

    while(sayac<=sayi1 && sayac<=sayi2)
    {
        if(sayi1%sayac==0 && sayi2%sayac==0)
        {
         ebob=ebob*sayac;
         sayi1=sayi1/sayac;
         sayi2=sayi2/sayac;
        }
        else
        {
            sayac++;
        }
    }

    cout<<"ebob : " <<ebob;


    return 0;
}