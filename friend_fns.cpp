#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class complexx{
	int a,b;
public:
	//below line just allows it access private members
	friend complexx create(complexx o1,complexx o2);
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

complexx create(complexx o1,complexx o2)
{
	complexx o3;
	o3.setValue(o1.a+o2.a,o1.b+o2.b);
	o3.showValue();
	return o3;
}

int main()
{
    complexx ob1,ob2,ob3;
    ob1.setValue(5,7);ob1.showValue();
    ob2.setValue(2,3);ob2.showValue();
    ob3=create(ob1,ob2);
	return 0;
}

// Properties of friend functions
/*

1.Not in the scope of class
2.Since it is not in the scope of the class,it cannot be called from the object of that class.
c1.sumComplex()==invalid
3.Can be invoked withoud the help of any object

4. Usually contains the arguments as objects
5. Can be declared inside public or private 
6. It cannot access the members directly by their names
and need object_name.memeber_name;

*/ 