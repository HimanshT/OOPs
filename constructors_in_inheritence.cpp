#include<iostream>
using namespace std;

/*

case1:
class B:public A{
	order of execution of constructor->first A() then B()
}

case 2:
class A:public B,public C{
	order of execution of constructor -> B() then C() and A()
}

case 3:
class A:public B,virtual public C{
	order of execution-> first C then B then A
}

*/

class Base1 {
	int data1;
public:
	Base1(int i)
	{
		data1 = i;
		cout << "Base class1 constructor called" << endl;
	}
	void printData(void)
	{
		cout << "The value of data for Base is " << data1 << endl;
	}
};

class Base2 {
	int data2;
public:
	Base2(int i)
	{
		data2 = i;
		cout << "Base class2 constructor called" << endl;
	}
	void printData(void)
	{
		cout << "The value of data for Base is " << data2 << endl;
	}
};

class Derived: public Base1, public Base2
{
	int data3;
public:
	Derived(int a, int b, int c): Base2(a), Base1(b) //this does not affect calling
	{
		data3 = c;
		cout << "Derived class constructor called" << endl;
	}
	void printData(void)
	{
		cout << "The value of data for Derived is " << data3 << endl;
	}

};

int main()
{
	Derived d1(1, 2, 3);
	d1.printData();
	return 0;
}


//qn1: if same fn is inherited from two diff base classes,then how
//the derived class will understand whose fn it is.