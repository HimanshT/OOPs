#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Complex {
	int a, b;
public:
	//creating constructor
	//constructor is a special member function with the same name as of the
	//class. It is automatically invoked whenever an object is created.
	//It is used to intialize  the objects of its class.
	Complex(void);//constructor declaration
	void printData()
	{
		cout << a << " " << b;
	}
};

Complex::Complex(void)//-default constructor
{
	a = 10; b = 30;
}

int main()
{
	Complex c1;
	c1.printData();
	return 0;
}


//1. it should be declared in the public section of the class.
//2. They are automatically invoked whenever the object is created.
//3. They cannot return values and don not have return types
//4. It can have default arguments
//5. We cannot refer to their address.
