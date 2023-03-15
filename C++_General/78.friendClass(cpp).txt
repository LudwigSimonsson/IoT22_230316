# include<iostream>
using namespace std;
    
/*program for friend class

*/
class your;
class my
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend your;
};
class your
{
public:
	my m;
	void fun()
	{
	     m.a=10;
	     m.b=10;
	     m.c=10;
	}
};