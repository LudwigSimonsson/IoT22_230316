# include<iostream>
using namespace std;
    
/*program for demo#1 of using virtual functions

*/
class base
{
public:
	virtual void fun()
	{
		cout<<"fun of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun()
	{
		cout<<"fun of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.fun();
	base *ptr=&d;
	ptr->fun();
}