#include<iostream>
using namespace std;
int main()
{
   int array[10];
   int sayi;
   cout<<"kac sayi girmek istiyosunuz : ";
   cin>>sayi;
   cout<<"sayilari giriniz : ";
   for(int i=1;i<=sayi;i++)
   {
    cin>>array[i];
   }
   cout<<endl;

   for(int j=sayi;j>=1;j--)
   {
    cout<<array[j]<<endl;
   }


    return 0;
}