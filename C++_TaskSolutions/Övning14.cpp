#include<iostream>
using namespace std;

void Max3(int a,int b,int c)
{

    if(a > b && a > c)
    {
        cout<<a;
    }
    else
    {
        if(b > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
}