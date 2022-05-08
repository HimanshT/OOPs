#include<iostream>
using namespace std;

class Base {
	int a;
public:
	virtual void display()
	{
		cout << "Base class ran\n";
	}
};

class Derived: public Base
{
public:
	void display()//if this will not be there,the actual virtual fn will run
	{
		cout << "Derived class ran\n";
	}
};

int main()
{
	Base *base;
	Base b1;
	Derived d1;
	base = &d1;
	base->display();
	return 0;
}