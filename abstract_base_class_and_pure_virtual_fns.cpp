#include<bits/stdc++.h>
using namespace std;

class Tutorial { //-->abstract base class
protected:
	string title;
	float rating;
public:
	//Tutorial() {}
	Tutorial(string s, float r)
	{
		title = s; rating = r;
	}
	virtual void display() = 0; //-->pure virtual fn
};

class Video: public Tutorial
{
	int videoLength;
public:
	Video(string s, float r, int l): Tutorial(s, r)
	{
		videoLength = l;
	}
	void display()
	{
		cout << "the videoLength is " << videoLength << "\n";
		cout << "The rating is " << rating;
	}
};

int main()
{
	string title = "Tutorials";
	float rating = 4.5;
	int videoLength = 10;

	//
	Video v1(title, rating, videoLength);
	//v1.display();
	Tutorial *tut1;
	tut1 = &v1;
	tut1->display();
	return 0;
}


// Rules for virtual function
// 1. They cannot be startic
// 2. They are accessed by object pointers
// 3. virtual fn can be a friend of another class virtual_fn_ex
// 4. A virtual fn in base class may not be used;
// 5. If a virtual fn is defined in a base class,
// there is no necessity of redifining it in the derived class virtual_fn_ex
