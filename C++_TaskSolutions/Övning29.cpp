#include<iostream>

using namespace std;

void Armstrong(int n)
{
    int sum=0,r;
    int m=n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
}