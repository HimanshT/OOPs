#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Base1 {
public:
	void greet() {
		cout << "Today is morning";
	}
};

class Base2 {
public:
	void greet() {
		cout << "Today is Afternoon";
	}
};

class Derived: public Base1, public Base2 {
public:
	// To specify which classes function run when there are same named functions in
	void greet() {
		Base1::greet();
	}
};

int main()
{
	Derived d1;
	d1.greet();
	return 0;
}