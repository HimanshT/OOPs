#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Complex;//forward declration

class Calculator{
public:
	int add(int a,int b)
	{
		return (a+b);
	}

	int sumRealComplex(Complex ,Complex);
};

class Complex{
	int a,b;
public:
	//declaring invidually
	friend int Calculator::sumRealComplex(Complex o1,Complex o2);
	//declaring the whole class
	friend class Calculator;
	void setValue(int p1,int p2)
	{
		a=p1;
		b=p2;
	}
	void showValue()
	{
		cout<<"The expressing is "<<a<<" + "<<b<<"i"<<endl;
	}
};

int Calculator :: sumRealComplex(Complex o1,Complex o2)
	{
		return (o1.a + o2.a);
	}

int main()
{
    Complex ob1,ob2;
    Calculator ob3;
    ob1.setValue(5,7);ob1.showValue();
    ob2.setValue(2,3);ob2.showValue();
    cout<<ob3.sumRealComplex(ob1,ob2);
	return 0;
}


// when we want to use the private data from one class to another class.