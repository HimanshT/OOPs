#include<bits/stdc++.h>
using namespace std;

class Complex{
	int a,b;
	float p,q,r;
public:
	Complex(int,int);
	Complex(float,float,float);
	void print()
	{
		cout<<p<<" "<<q<<" "<<r;
	}
};

Complex::Complex(int c,int d) //constructor overloading as two constructors,and it identifies the actual
//arguments to change by itself
{
	a=c;b=d;
}

Complex::Complex(float x,float y,float z)//you can write this inside as well
{
	p=x;
	q=y;
	r=z;
}

int main()
{
    Complex c(1.24,3.34,6.75);//implicit call;
    c.print();
	return 0;
}