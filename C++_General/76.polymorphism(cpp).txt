# include<iostream>
using namespace std;
    
/*program for obtaining polymorphism

*/
class car
{
public:
	virtual void start()
	{
		cout<<"car started"<<endl;
	}
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	car *p=new innova();
	ptr->start();
	p=new swift();
	ptr->start();
}