#include <bits/stdc++.h>
using namespace std;

// class FriendClass {};

class Complex {
	int a, b;
	friend class FriendClass;
public:
	Complex(int p, int q)
	{
		a = p, b = q;
	}
	void getData()
	{
		cout << a << " " << b;
	}
};

class FriendClass {
	int a, b;
public:
	FriendClass(int x, int y) {
		a = x, b = y;
	}

	void sum(Complex &c)
	{
		cout << c.a + this->a << endl;
	}
};


int main()
{
	Complex c(5, 6);
	FriendClass f(2, 3);
	f.sum(c);
	return 0;
}




// when we want to use the private data from one class to another class.