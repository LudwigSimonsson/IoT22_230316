# include<iostream>
using namespace std;
    
/*program for function overloading sum of two integers

*/
int sum(int a,int b)
{
	return a+b;
}
float sum(float a,float b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a,b,c;
}
int main()
{
	cout<<sum(10,5)<<endl;
	cout<<(12.5f,3.4f)<<endl;
	cout<<sum(10,20,3)<<endl;
	return 0;
}