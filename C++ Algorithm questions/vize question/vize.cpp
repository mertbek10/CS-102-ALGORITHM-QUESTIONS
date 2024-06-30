#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"enter a number : ";
    cin>>sayi;

for(int i=0;i<sayi;i++)
{
    char harf='a'; //harfi resetlemek için ilk for döngüsünde tanımla
    harf=harf+i;//her seferinde i kadar artırki sonraki sefer başka harften başlasın
    
    for(int j=0;j<sayi-i;j++)//i ilk olarak 0 ve her seferinde 1 harf eksik yazılıyor
    {
        
         cout<<harf;
         harf=harf+1; //her satırda harfi bir arttır
    }
    for(int k=0;k<i;k++)
    {
        cout<<k+1;//sayıları yazdırmak için son döngü
    }
    cout<<endl;
}

    return 0;
}