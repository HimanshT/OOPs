#include<iostream>
using namespace std;

class Base {
	int a;
public:
	// void display()
	// {
	// 	cout << "Base class ran\n";
	// }
};

class Derived: public Base
{
public:
	void display()
	{
		cout << "Derived class ran\n";
	}
};

int main()
{
	Base b1;
	Base *base_class_ptr;
	Derived d1;
	base_class_ptr = &d1;//base class ptr pointing to derived class
	base_class_ptr->display();//will run base class
	Derived *derived_class_ptr = &d1;
	derived_class_ptr->display();
	return 0;
}

// the pointer first look their fn in their base class,if not they again find in their own class
// Base class ptr pointing to base class is necessary to have fn display in base class,and it can take over base class pointer;
// but in case of derived class not having display() will not work.