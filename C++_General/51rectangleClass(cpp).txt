# include<iostream>
using namespace std;
    
/*program for writing class in c++ for rectangle

*/
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
        {
		return perimeter 2*(length+breadth);
	}
};
int main()
{
	rectangle r1;
	r1.length=5;
	r1.breadth=10;
	cout<<"area is "<<r1.area()<<endl;
	cout<<"perimeter is "<<r1.perimeter()<<endl;
}