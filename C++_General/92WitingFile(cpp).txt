# include<iostream>
# include<fstream>
using namespace std;
     
/*program for writing a file

*/
int main()
{
	ofstream ofs("my.text",ios::trunc);
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
}