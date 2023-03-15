# include<iostream>
# include<fstream>
using namespace std;
     
/*program for reading a file

*/
int main()
{
	ifstream ifs;
	ifs.open("my.txt");
	if(ifs_open()) 
	cout<<"file is opened"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	ifs.close();
	cout<<"name"<<name<<endl;
	cout<<"roll"<<rollendl;
	cout<<"branch"<<branch<<endl;
}