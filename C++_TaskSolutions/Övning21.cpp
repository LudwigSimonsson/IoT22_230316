#include<iostream>

using namespace std;

void DayName(int day)
{
    switch(day)
    {
        case 1: cout<<"sun";
            break;
        case 2: cout<<"mon";
            break;
        case 3: cout<<"tue";
            break;
        case 4: cout<<"wed";
            break;
        case 5: cout<<"thu";
            break;
        case 6: cout<<"fri";
            break;
        case 7: cout<<"sat";
            break;
        default: cout<<"invalid day number";
    }
}