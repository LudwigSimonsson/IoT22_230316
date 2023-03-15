# include<iostream>
using namespace std;
    
/*program for inheritance

*/
class base
{
public:
	int a;
     	void display()
	{
	 	cout<<"display of base"<<a<<endl;
	}
};
class derived:public base
{
public:
      	void show()
	{
	   	cout<<"show of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.a=100;
	d.display();
	d.show();
}