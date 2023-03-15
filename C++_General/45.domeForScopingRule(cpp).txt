# include<iostream>
using namespace std;
    
/*program for scoping rule

*/
int x=10;
int main()
{
	int x=20;
	{
		int x=30;
		cout<<x<<endl;
	}
	cout<<x<<endl;
	cout<<::x<<endl;
}