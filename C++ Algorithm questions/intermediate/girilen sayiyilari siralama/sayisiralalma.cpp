#include<iostream>
using namespace std;
int main()
{
//girilen sayıları sıralama
int array[10];
   int sayi,min,sayac=1,i;
   min=array[0];

   cout<<"kac sayi girmek istiyosunuz : ";
   cin>>sayi;
   cout<<"sayilari giriniz : ";
   for(int i=0;i<sayi;i++)
   {
    cin>>array[i];

    if(min>array[i])
    {
        min=array[i];
    }
   }
   cout<<endl;
   cout<<min;
   cout<<endl;
   
   while(sayac<sayi)
   {
    min++;
    for(int j=0;j<sayi;j++)
    {
    if(min==array[j])
    {
        cout<<array[j]<<endl;
        sayac++;
    }
    }
   }
    return 0;
}