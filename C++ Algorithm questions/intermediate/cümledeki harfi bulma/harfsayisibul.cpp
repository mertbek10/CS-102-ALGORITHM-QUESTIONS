#include <iostream>
using namespace std;

int main()
{
    char str[100] ;
    char harf;
    int sayac = 0;

    cout<<"cumle giriniz : ";
    cin.getline(str,100);//uzun cümleler alırken 

    cout << "Bir karakter girin: ";
    cin >> harf;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == harf)
        {
            
            sayac++;
        }
    }

    if(sayac==0)
    {
        cout << "Harf yok" << endl;
    }

    else
    {
    cout << "Bu harf  bu cumlede  " << sayac << " tane var" << endl;
    }
       
    
    

 return  0;
}