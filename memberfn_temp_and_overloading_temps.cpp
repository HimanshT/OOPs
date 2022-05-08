#include<iostream>
using namespace std;

template<class T>//where you need custom data type,write T
class vector {
public:
	T data;
	vector(T a)
	{
		data = a;
	}
	void showData();
};

template<class T>//member fn
void vector<T>::showData()
{
	cout << data;
}

template<class T>
void display(T a)//
{
	cout << "template";
}

void display(int a)//this will run first,since exact match
{
	cout << "not template";
}

int main()
{
	// vector<int> v1(5);
	// v1.showData();
	display(5);
	return 0;
}