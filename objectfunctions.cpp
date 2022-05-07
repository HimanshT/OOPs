#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class complexx{
	int a;
	int b;
public:
	void setData(int v1,int v2)
	{
		a=v1;b=v2;
	}
	void setDataBySum(complexx v1,complexx v2)
	{
		a=v1.a + v2.a;
		b=v1.b + v2.b;
	}
	void display()
	{
		cout<<a<<" "<<b;
	}
};

int main()
{
    complexx o1,o2,o3;
    o1.setData(1,2);
    o2.setData(3,4);
    o3.setDataBySum(o1,o2);
    o3.display();
	return 0;
}