#include<cmath>

float root(int a,int b,int c)
{
    float root1;
    
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    
    return root1;
}