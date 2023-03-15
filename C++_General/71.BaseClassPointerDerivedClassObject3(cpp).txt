# include<iostream>
using namespace std;
    
/*program for demo#3-base class pointer derived class object

*/
class basicCar
{
public:
	void start()
	{
		cout<<"car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void playmusic()
	{
		cout<<"playing music"<<endl;
	}
};
int main()
{
	basicCar b;
	advanceCar *q=&b;
	advanceCar a;
	a.start();
	a.playmusic();
	basicCar *ptr=&a;
	ptr->start();
	ptr->playmusic();
}