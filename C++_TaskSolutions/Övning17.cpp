#include<iostream>
using namespace std;

void Discount(int amount)
{
    float disAmount;
    
    if(amount>=5000)
    {
        disAmount=amount-amount*20/100.0;
        cout<<disAmount;
    }
    else
    {
        if(amount>=2000 && amount<5000)
        {
            disAmount=amount-amount*10/100.0;
            cout<<disAmount;
        }
        else
        {
            disAmount=amount-amount*5/100.0;
            cout<<disAmount;
        }
    }
}