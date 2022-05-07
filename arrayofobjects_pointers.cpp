#include <bits/stdc++.h>
using namespace std;

class Shop{
int id,price;
public:
	void getData()
	{
		cout << "id " << id << endl;
		cout << "price " << price << endl;
	}
	void setData(int x, int y)
	{
		id = x, price = y;
	}
};

int main()
{
	int size=2;
	//basically this is the syntax to allocate multiple objects
	//or arrays. *ptr points to the address of first object
	Shop *ptr=new Shop[size];
	int x,y;
	for (int i = 0; i < size; ++i)
	{
		cout<<"Enter the id and price"<<endl;
		cin>>x>>y;
		ptr->setData(x,y);
		ptr->getData();
		ptr++;
	}
	return 0;
}