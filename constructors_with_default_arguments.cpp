#include<bits/stdc++.h>
using namespace std;

class Simple{
	int data1,data2;
public:
	Simple(int a,int b=9)//constuctor with default arguments
	{
		data1=a,data2=b;
	}
	void printData()
	{
		cout<<data1<<" "<<data2;
	}
};

int main()
{
	Simple a(4);
	a.printData();
    
	return 0;
}