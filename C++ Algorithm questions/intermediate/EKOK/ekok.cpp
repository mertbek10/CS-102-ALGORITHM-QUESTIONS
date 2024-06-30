#include<iostream>
using namespace std;

int main()
{
    int sayi1,sayi2, ekok=1, sayac=2,ilksayi,ikincisayi;
    

   cout<<"sayilari giriniz : ";
   cin>>sayi1>>sayi2;
   ilksayi=sayi1;
   ikincisayi=sayi2;


    while(sayac<=sayi1 || sayac<=sayi2)
    {

    if(sayi1%sayac==0 && sayi2%sayac!=0)
    {
         ekok=sayac*ekok;
        sayi1=sayi1/sayac;
    }
        
    
    else if(sayi1%sayac!=0 && sayi2%sayac==0)
    {
         ekok=sayac*ekok;
        sayi2=sayi2/sayac;
       
       
         
    }

    else if(sayi1%sayac==0 && sayi2%sayac==0)
    {

         ekok=sayac*ekok;
        sayi2=sayi2/sayac;
        sayi1=sayi1/sayac;
        
       
      
    }

    else{
        sayac++;
        
    }


    }

    cout<<ilksayi<<" ve "<<ikincisayi <<" sayilarinin ekoku : "<<ekok;



    return 0;
}