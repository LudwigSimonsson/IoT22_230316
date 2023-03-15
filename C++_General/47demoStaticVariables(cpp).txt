# include<iostream>
using namespace std;
    
/*program for static variables

*/
void fun()
{
	static int s=10;
	s++;
	cout<<s<<endl;
}
int main()
{
	fun();
	fun();
}