//baklava 
#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"enter a number : ";
    cin>>sayi;

    for(int i =1 ;i<=sayi;i++)
    {
        for(int j=1;j<=sayi-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

 for(int i = sayi-1 ;i>=1; i--)
    {
        for(int j=1;j<=sayi-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
