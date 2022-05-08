#include<bits/stdc++.h>
using namespace std;

int main()
{
	list<int> l1;
	for (int i = 0; i < 4; ++i)
	{
		/* code */
		l1.push_back(i);
	}
	list<int>::iterator iter;
	iter = l1.begin();
	while (iter != l1.end())
	{
		cout << *iter << " ";
		iter++;
	}

	//you can set values using *ptr=76;etc
	//list.merge(list1);

	//reversing the list
	//list.reverse();
	return 0;
}