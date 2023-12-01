#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class employee {
	int id;
	static int count;//do not initialize here;
	//int count=0;//be default with zero
public:
	void setData()
	{
		cout << "enter the id\n";
		cin >> id;
		count++;
	};
	void getData()
	{
		cout << "The id is \n" << id << " and the employee no. is \n" << count << endl;
	};

	static void getCount()
	{
		cout << "The value of count is " << count << endl;
	};
};
//if we make static,it is shared by all the objects
//static belongs to class,not an object
int employee::count;//initialize with a value here,count=50;

int main()
{
	employee himanshu, shubh, prashu;
	himanshu.setData();
	himanshu.getData();
	employee::getCount(); // ----- Important

	shubh.setData();
	shubh.getData();
	employee::getCount();

	prashu.setData();
	prashu.getData();
	employee::getCount();
	return 0;
}