#include<iostream>
using namespace std;

int main()
{
    int sayi1,sayi2,sayi1ilk,sayi2ilk;

    cout<<"sayilari giriniz : ";
    cin>>sayi1>>sayi2;

    sayi1ilk=sayi1;
    sayi2ilk=sayi2;

    if(sayi1<0)
    {
        sayi1=-sayi1;
    }

    if(sayi2<0)
    {
        sayi2=-sayi2;
    }

    if(sayi1<sayi2)
    {
        cout<<sayi1ilk<<" orijine daha yakin";
    }

    else if(sayi2<sayi1)
    {
        cout<<sayi2ilk<<" orijine daha yakin";
    }

    return 0;
}