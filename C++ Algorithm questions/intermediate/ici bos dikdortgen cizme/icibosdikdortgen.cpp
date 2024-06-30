#include<iostream>
#include<string>
using namespace std;
int main()
{
int i,j,uzun,kisa,k;
cout<<"sayilari gir : ";
cin>>uzun>>kisa;

for(i=1;i<=uzun;i++)
{
    if(i!=1 && i!=uzun)
    {
        cout<<" #";
        for(k=1 ;  k <= (kisa-2) ;k++)
        {
            cout<<"  ";
        }
        cout<<" #"<<endl;

    }
    else{
    for(j=1;j<=kisa;j++)
    {
        cout<<" #";
    }
    cout<<endl;
    }
}




   return 0; 
}


