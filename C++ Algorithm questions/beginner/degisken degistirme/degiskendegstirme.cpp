#include<iostream>
using namespace std;

int main()
{
    int i=5,j=3,k;

    k=i;
    i=j;
    j=k;

    cout<<"i : "<<i<<endl<<"j: "<<j;

    return 0;
}