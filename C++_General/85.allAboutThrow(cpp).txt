# include<iostream>
using namespace std;
    
/*program for all about throw

*/
class myexception: exception
{
};
int division(int a,int b)throw(myexception)
{
	if(b==0)
		throw myexception();
	return a/b;
}
int main()
{
	int x=10,y=2,z;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}