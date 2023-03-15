# include<iostream>
using namespace std;
    
/*program for function overriding

*/
class base
{
public:
	void display()
	{
		cout<<"display of base"<<endl;
	}
};
class derived:public base
{
public:
	void display()
	{
		cout<<"display of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.display();
}