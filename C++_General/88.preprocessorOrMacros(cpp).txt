# include<iostream>
using namespace std;
    
/*program for preprocessor or macros

*/
#define max(x,y) (x>?x:y)
#define msg(x) #x
#define pI 3.1425
#define pI 3
#ifndef pI
      #define pI 3
#endif

int main()
{
	cout<<pI;
	cout<<max(10,12)<<endl;
	cout<<msg(hello)<<endl;
}