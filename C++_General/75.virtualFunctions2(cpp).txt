# include<iostream>
using namespace std;
    
/*program for demo#2 of using virtual functions

*/
class basicCar
{
public:
	virtual void start()
	{
		cout<<"basic car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void start()
	{
		cout<<"advance car started"<<endl;
	}
};
int main()
{
	basicCar *p=new advanceCar();
	ptr->start();
}