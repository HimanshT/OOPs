#include "bits/stdc++.h"
using namespace std;

class Employee
{
private:
	int a,b,c;
public:
	int d,e;
	void setData(int a1,int b1,int c1);//declaration
	void getData();//you can also write the function her;
};

//class employee{
//	
//}a,b,c; is also valid. you can make objects with class;

void Employee ::setData(int a1,int b1,int c1)
{
	a=a1;b=b1;c=c1;
}

void Employee::getData()
{
	cout<<"The value of b is "<<b;
}

int main()
{
	Employee himanshu;
	// himanshu.a--it will give an error
	himanshu.setData(2,3,4);
	himanshu.getData();
	return 0;
}