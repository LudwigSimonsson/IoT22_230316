#include<iostream>

using namespace std;

void Factors(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    
}