# include<iostream>
using namespace std;
    
/*program for using namespace

*/
namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};
using namespace first;
int main()
{
	second::fun();
	std::cout<"kkk"<<endl;
}