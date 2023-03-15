#include<iostream>
using namespace std;

void Working(int hour)
{
    if(hour>=9 && hour<=18)
        cout<<"working";
    else
        cout<<"leisure";
}