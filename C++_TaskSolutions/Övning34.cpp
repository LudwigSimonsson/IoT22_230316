#include<iostream>
using namespace std;

void Max()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    
    for(int x:A)
    {
        if(x>max)
            max=x;
    }
    cout<<max;
}