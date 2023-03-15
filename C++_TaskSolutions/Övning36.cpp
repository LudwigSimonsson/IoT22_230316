#include<iostream>
using namespace std;

void Count()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    
    for(int x:A)
    {
        if(x<0)
            ncount++;
        else
            pcount++;
    }
    
    cout<<pcount<<" "<<ncount;
}