#include <bits/stdc++.h>
using namespace std;

class Complex
{
	int real, imaginery;

public:
	void getData()
	{
		cout << "real part " << real << endl;
		cout << "imaginery " << imaginery << endl;
	}
	void setData(int x, int y)
	{
		real = x, imaginery = y;
	}
};

int main()
{
	// // Complex c1;
	// //Complex *ptr=&c1;
	// Complex *ptr = new Complex;
	// //(*ptr).setData(1, 54);this can be written as
	// ptr->setData(1,2);
	// //(*ptr).getData(); this can be written as
	// ptr->getData();

	//array of objects
	Complex *ptr1 = new Complex[4];
	ptr1->setData(1, 2);
	ptr1->getData();

	return 0;
}