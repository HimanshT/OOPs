#include<bits/stdc++.h>
using namespace std;

class Y;

class X{
	int data;
public:
	void setValue(int x)
	{
		data=x;
	}
	friend void add(X,Y);
};

class Y{
	int data;
public:
	void setValue(int y)
	{
		data=y;
	}
	friend void add(X,Y);
};

void add(X ob1,Y ob2)
{
	cout<<ob1.data+ob2.data;
}

int main()
{
    X ob1;
    Y ob2;
    ob1.setValue(5);
    ob2.setValue(10);
    add(ob1,ob2);
	return 0;
}

/*
To exchange two values
void exchange(X &a,y &b)//call by reference
{
	int temp=a.val;
}


*/