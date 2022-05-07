#include<iostream>
using namespace std;

class sports
{
	int players;
public:
	void greeting()
	{
		cout<<"Hi welcome to MNNIT sports\n";
	}
};

class Badminton:virtual public sports
{
	int players;
public:
	void greeting1()
	{
		cout<<"Hi welcome to Badminton \n";
	}
};

class Cricket:virtual public sports
{
	int players;
	public:
	void greeting2()
	{
		cout<<"Hi welcome to Cricket \n";
	}
};

class player:public Badminton,public Cricket
{
	string name;
public:
	void greeting3()
	{
		cout<<"Hi,how you doing,thank you champ for joining sports\n";
	}
};

int main()
{
   player himanshu;
   himanshu.greeting();
   himanshu.greeting3();
	return 0;
}