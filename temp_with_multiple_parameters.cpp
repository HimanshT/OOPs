#include<iostream>
using namespace std;

// template<class T1,class T2>
// class (name){

// }
// for mulitple parameters

template<class T1, class T2>
class Set {
public:
	T1 data;
	T2 name;
	void setData(T1 d, T2 s)
	{
		data = d; name = s;
	}
	void showData()
	{
		cout << data << "\n" << name;
	}
};

int main()
{
	//Set<int, string> s1;
	Set<string, string> s1;
	s1.setData("tripathi", "himanshu");
	s1.showData();
	return 0;
}
