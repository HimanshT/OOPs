#include<iostream>
using namespace std;

//syntax for multiple inheritence
//class Derived:visibility-mode base1,visibility-mode base2
/*

class body of class "derived";

*/

class Base1{
protected:
	int base1int;
public:
	void setValue1(int value1)
	{
		base1int=value1;
	}
};

class Base2{
protected:
	int base2int;
public:
	void setValue2(int value2)
	{
		base2int=value2;
	}
};

class Derived:public Base1,public Base2
{
	public:
		void show()
		{

	cout<<"Base1 value "<<base1int<<" base2 int "<<base2int;	
		}
};

int main()
{
    Derived d1;
    d1.setValue1(10);
    d1.setValue2(15);
    d1.show();
	return 0;
}