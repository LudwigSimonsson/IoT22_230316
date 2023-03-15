# include<iostream>
using namespace std;
    
/*program for destructor

*/
class demo
{
	int *p;
public:
	demo()
	{
		p=new int[10;
	     	cout<<"constructor of demo"<<endl;
	}
       	~demo()
	{
		delete[]p;
	   	cout<<"destructor of demo"<<endl;
	}
};
void fun()
{
	demo *p=new demo();
	delete p;
}
int main()
{
	fun();
}