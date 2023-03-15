#include<iostream>
using namespace std;

void Digits(int n)
{
    int digit;
    
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        cout<<digit<<" ";
    }
}