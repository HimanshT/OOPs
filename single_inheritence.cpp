#include<iostream>
using namespace std;

class Base{
	int data1;
public:
	int data2;
	void setData();
	int getData1();
	int getData2();
	Base(){};
};

void Base::setData(void)
{
	data1=10;data2=30;
}

int Base::getData1()
{
	return data1;
}

int Base::getData2()
{
	return data2;
}

class Derived:public Base{
	int data3;
public:
	void process();
	void display();
};

void Derived::process()
{
	data3=data2*getData1();
}

void Derived::display()
{
	cout<<data3<<endl;
}

int main()
{
	Derived d1;//this can access all public functions of base class.
	d1.setData();
    d1.process();d1.display();
	return 0;
}