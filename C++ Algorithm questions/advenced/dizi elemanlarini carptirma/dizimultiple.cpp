// DİZİ ELEMANLARINI ÇARPTIRMA
 #include <iostream>
 #include <string>
 using namespace std;

int main()
{
    int dizi[] ={1,2,3,4,5,6,7};
    int len = sizeof(dizi)/sizeof(dizi[0]);//toplam bytı dizinin 1 tane elemanına böldüm ve dizinin eleman sayısını buldum
    int dizi2[len];
    for(int i=0; i<len; i++)
    {
        if(i==0)
        {
            dizi2[i]=dizi[i]*dizi[i+1];

        }
        else if(i==len-1)
        {
            dizi2[i]=dizi[i]*dizi[i-1];
        }
        else
       dizi2[i]=dizi[i+1]*dizi[i-1];
        cout<<dizi2[i]<<endl;
    }

    return 0;
}