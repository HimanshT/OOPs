#include<iostream>
using namespace std;

template<class T>//where you need custom data type,write T
class vector {
public:
	T *arr;
	int size;

	vector(int m)
	{
		size = m;
		arr = new T[size];
	}
	T dotproduct(vector &v)
	{
		T d = 0;
		for (int i = 0; i < size; ++i)
		{
			d += this->arr[i] * v.arr[i];
		}

		return d;
	}
};


int main()
{
	// vector v1(3);

	// v1.arr[0] = 3;
	// v1.arr[1] = 3;
	// v1.arr[2] = 3;

	// vector v2(3);

	// v2.arr[0] = 4;
	// v2.arr[1] = 4;
	// v2.arr[2] = 4;

	// cout << v1.dotproduct(v2);

	vector<float> v1(3);

	v1.arr[0] = 3.1;
	v1.arr[1] = 3.1;
	v1.arr[2] = 3.1;

	vector<float> v2(3);

	v2.arr[0] = 4.2;
	v2.arr[1] = 4.2;
	v2.arr[2] = 4.2;

	cout << v1.dotproduct(v2);
	return 0;

}