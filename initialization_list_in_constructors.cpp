#include<bits/stdc++.h>
using namespace std;

/*
syntax for initialization list in constructor:
constructor(argument-list):initilization-section//just a process of providing values

{
	assignment+other code;
}

class Test{
	int x;
	int y;
	public:
		Test(int a,int b):x(a),y(b)---x(a),y(b+a)---x(a),y(x+b)
		//Test(int a,int b):y(b),x(y+a)-->red flag this will create
		//problem because x will be initialized first
{
	cout<<"this is a list constructor";
}
}

ex:

*/

int main()
{

	return 0;
}


class MyClass {
private:
	int num;
	float value;

public:
	// Constructor with initialization list
	MyClass(int n, float v) : num(n), value(v) {
		// Constructor body (if any)
	}
};
