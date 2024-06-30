#include<iostream>
#include<string>
using namespace std;
int main()
{
    string kelime;
    int i;
    cout<<"tersten yazmak istediginiz kelimeyi girin : ";
    cin>>kelime;
//kelime.length fonksiyonu kelimenin uzunluguna esittir
   for (int i = kelime.length(); i >=0; i--) {
    // Döngü içinde yapılacak işlemler
cout<<kelime[i];
    }

   return 0; 
}