# include<iostream>
using namespace std;
    
/*program for demo#2-base class pointer derived class object

*/
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	cuboid *q=&r;
	cuboid c;
	c.area();
	c.volume();
	p->area();
	p->volume();		      
	return 0;
}