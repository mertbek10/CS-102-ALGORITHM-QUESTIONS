//girilen sayidan sonraki 10 asal sayiyi bulma
#include<iostream>
using namespace std;
int main()
{
    int kontrol,i,sayi,sayac=0;
cout<<"enter a number : ";
cin>>sayi;
    while(sayac<10)
    {
        kontrol=0;
        for(i=2 ;i<sayi; i++)
        {
            if(sayi%i==0)
            {
                kontrol++;
            }

        }

        if(kontrol==0)
        {
            cout<<sayi<<endl;
              sayac++;
        }
        sayi++;
      
    }




    return 0;
}
