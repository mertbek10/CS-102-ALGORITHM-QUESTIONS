//kullanıcının girdigi sayi kadar çift sayilar o dan ve ortalaması
#include<iostream>
using namespace std;
int main()
{

    int sayi,i=1,ort,sayac=1,sum=0;

    cout<<"enter a number : ";
    cin>>sayi;

    cout<<"ilk "<<sayi<<" cift sayi : ";
    while(sayac<=sayi)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            sum=sum+i;
            sayac++;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout<<endl;

    ort=sum/sayi;
    cout<<"sayilarin ortalamasi : "<<ort;


    return 0;
}