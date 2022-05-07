#include<bits/stdc++.h>
using namespace std;

class Complex{
	int a,b;
public:
	Complex(int ,int);
	void printData(void)
	{
		cout<<a<<" "<<b<<endl;
	}
};

Complex::Complex(int x,int y)//parameterized since it takes parameters
{
	a=x;b=y;
}

int main()
{
    //Implicit Call
    Complex a(4,5);

    //Explicit Call
    Complex b = Complex(5,6);

    a.printData();b.printData();
	return 0;
}