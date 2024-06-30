#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"kucuk bir sayi giriniz : ";
    cin>>sayi;
   for(int i=1;i<=sayi;i++)
   {
    for(int j=i;j<=sayi-1+i;j++)
    {
        cout<<j;
    }
    cout<<endl;
   }
    
   
    return 0;
}