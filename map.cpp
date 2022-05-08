#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> marks;
	marks["himanshu"] = 45;
	marks["shubh"] = 67;
	map<string, int>::iterator it;
	for (it = marks.begin(); it != marks.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << "\n";
	}
	return 0;
}