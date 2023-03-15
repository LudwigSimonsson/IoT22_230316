# include<iostream>
using namespace std;
    
/*program for function templates

*/
template<class t>
t maxim(t a,t b)
{
       return a>b?a:b;
}
int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;
	return 0;
}