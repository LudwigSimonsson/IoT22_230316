# include<iostream>
using namespace std;
    
/*program for creating default constructors

*/
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle()
	{
		length=1;
		breadth=1;
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	rectangle r1;
	cout<<r1.area()<<endl;
}