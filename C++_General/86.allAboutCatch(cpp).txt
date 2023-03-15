# include<iostream>
using namespace std;
    
/*program for all about catch

*/
class myexception1: exception
{
};
class myexception2:public my exception1
{
};
int main()
{
	try
	{
		throw myexception1();
	}
	catch(myexception2 e)
	{
		cout<<"int catch"<<endl;
	}
	catch(myexception1 e)
	{
		cout<<double catch"<<endl;
	}
	catch(...)
	{
		cout<<all catch<<endl;
	}
}