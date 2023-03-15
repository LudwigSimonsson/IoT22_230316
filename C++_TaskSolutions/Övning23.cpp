#include<iostream>
using namespace std;

void SumOfN(int n)
{
    int sum=0;
    
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}