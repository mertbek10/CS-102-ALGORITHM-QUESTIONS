//kullanici tarafindan girilen 3 basamaklı sayinin rakamlari toplamini bulan algoritma
#include<iostream>
using namespace std;
int main()
{
    int sayi,sum=0;
    cout<<"please enter 3 digit number : ";
    cin>>sayi;

    while(sayi>=1)
    {
        sum=sum+sayi%10;
        sayi=sayi/10;
    }

    cout<<sum;


    return 0;


}