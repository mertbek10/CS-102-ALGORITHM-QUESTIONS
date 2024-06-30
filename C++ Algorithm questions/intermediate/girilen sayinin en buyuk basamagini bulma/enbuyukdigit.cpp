//en buyuk basamak bulma
#include<iostream>
using namespace std;

void number(int sayi)
{
    int digit,largest;
    
largest=sayi%10;


    while(sayi>=1)
    {
        digit=sayi%10;
        if(digit>largest)
        {
            largest=digit;

        }
        sayi=sayi/10;

    }
    cout<<largest;

}
int main()
{
    int sayi;
    cout<<"enter a number : ";
    cin>>sayi;
number(sayi);
    
   
   
    return 0;
}