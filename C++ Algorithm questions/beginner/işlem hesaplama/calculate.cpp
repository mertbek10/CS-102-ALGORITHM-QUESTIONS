#include<iostream>
using namespace std;
int main()
{
    int sayi,toplam,fark,mod,carpim,sayi1;
    float bolum;

    cout<<"enter two number : ";
    cin>>sayi1>>sayi;

    toplam=sayi+sayi1;
    mod=sayi1%sayi;
    fark=sayi1-sayi;
    carpim=sayi1*sayi;
    bolum=sayi1/sayi;

    cout<<"toplam : "<<toplam<<endl<<
    "fark : "<<fark<<endl<<
    "bolum: "<<bolum<<endl<<
    "carpim : "<<carpim<<endl<<
    "mod : "<<mod;
    


    return 0;


}