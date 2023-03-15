#include<iostream>
using namespace std;

void Grades(int m1,int m2,int m3)
{
    float Total,Avg;
    
    Total=m1+m2+m3;
    Avg=Total/3;
    
    if(Avg>=60)
    {
        cout<<'A';
    }
    else
    {
        if(Avg>=35 && Avg<60)
            cout<<'B';
        else
            cout<<'C';
    }
}