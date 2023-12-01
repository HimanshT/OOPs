#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Employee {
	int id;
	int salary;
public:
	void setId()
	{
		salary = 500;
		cout << "Enter the id of Employee" << endl;
		cin >> id;
	}

	void getId()
	{
		cout << "The id is " << id << endl;
	}
};

int main()
{
	// Employee himanshu,aman,darshit;
	// himanshu.setId();
	// himanshu.getId();
	Employee em[2];
	for (int i = 0; i < 2; i++)
	{
		em[i].setId();
		em[i].getId();
	}
	return 0;
}