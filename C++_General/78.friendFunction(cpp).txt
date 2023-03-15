# include<iostream>
using namespace std;
    
/*program for friend function

*/
class test
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend void fun();
};
void fun()
{
	test t;
	t.a=10;
	t.b=15;
	t.c=9;
}