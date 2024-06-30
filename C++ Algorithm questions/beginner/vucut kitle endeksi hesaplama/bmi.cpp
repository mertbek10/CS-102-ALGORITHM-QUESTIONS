#include<iostream>
using namespace std;

int main()
{
    float height, weight, bmi;

    cout<<"enter your heigt(m) : ";
    cin>>height;

    cout<<"enter your weight(kg) : ";
    cin>>weight;

    bmi=weight/(height*height);

    cout<<"your body mass index : "<<bmi;

    return 0;
}