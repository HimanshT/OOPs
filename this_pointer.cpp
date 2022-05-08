#include<iostream>
using namespace std;

class Employee {
	int id;
public:
	Employee &setId(int id)/// you cannot use void setData(int a){a=a}--it will give error
	{
		this->id = id;
		return *this;
	}

	void getId()
	{
		cout << "The id is " << id << endl;
	}
};

int main()
{
	//this is a keyword which is a pointer which points to the object
	//which is being created,which invoked the member function

	Employee a1; a1.setId(50).getId();
	return 0;
}