#include<iostream>
using namespace std;

void Reverse(int n)
{
    int rev=0;
    int m=n;
    int r;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;
    
}