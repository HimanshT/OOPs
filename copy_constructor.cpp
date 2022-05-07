#include<bits/stdc++.h>
using namespace std;

class Number{
	int a;
public:
	Number(){};
	Number(int x)
	{
		a=x;
	}
//when no copy constructor is found,compiler supplies
	//its own copy constructor
	Number(Number &obj)//copy constructor
	{
		cout<<"called"<<endl;
		a=obj.a;
	}

	void display()
	{
		cout<<a<<endl;
	}
};

int main()
{
    Number n1,n2,n3;
    n1=Number(6);
    n2=Number(n1);//--called--reference operator,copy constructor invoked
    n2.display();
    n3=n1; //copy constructor not called because the object n3 is already
    //formed above.
    Number n4=n1; //--called because new object is made
	return 0;
	//copy constructor is only called when a new object is made
}