#include<iostream>
using namespace std;
int main()
{
    int sekil,uzunkenar,kisakenar,yaricap,kenar,taban,yukseklik;
    float alan;

cout<<"1.kare"<<endl<<
"2.ucgen"<<endl<<
"3.daire"<<endl<<
"4.dikdortgen"<<endl<<
"alanini hesaplamak istediginiz sekli giriniz : ";
cin>>sekil;

switch(sekil)
{
    case 1: cout<< "kenar giriniz :";
    cin>>kenar;
    alan=kenar*kenar;
    cout<<alan;
    break;

    case 2: cout<<"taban ve yukseklik giriniz : ";
    cin>>taban>>yukseklik;
    alan=(taban*yukseklik)/2;
    cout<<alan;
    break;

    case 3: cout<<"yaricap giriniz : ";
    cin>>yaricap;
    alan=yaricap*yaricap*3.14;
    cout<<alan;
    break;

    case 4: cout<<"uzun ve kisakenar giriniz : ";
    cin>>uzunkenar>>kisakenar;
    alan=uzunkenar*kisakenar;
    cout<<alan;
    break;
}

    return 0;
}