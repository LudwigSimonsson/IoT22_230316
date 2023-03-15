#include<iostream>
using namespace std;


int Max(int a,int b,int c)

{

    if(a>b && a>c)

    return a;

    else if( b>c)

    return b;

    else return c;

}

void Main()
{
    cout<<Max(7,10,5);
}