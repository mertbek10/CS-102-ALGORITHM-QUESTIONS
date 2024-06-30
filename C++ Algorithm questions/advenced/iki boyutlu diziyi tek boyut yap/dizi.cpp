#include<iostream>
using namespace std;

int main()
{
    int satir, sutun, i,j,k=0;
    int dizi[100][100];
    int dizi2[10000];

    cout<<"iki boyutlu dizinin satir ve sutun sayilarini girin : ";
    cin>>satir;
    cin>>sutun;

    cout<<"dizinin elemanlarini giriniz : ";
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
           cin>> dizi[i][j];
        }
    }

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            dizi2[k]=dizi[i][j];
            k++;
        }
    }

    k=0;

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            cout<<dizi2[k]<<endl;
            k++;
        }
    }
    

    return 0;
}