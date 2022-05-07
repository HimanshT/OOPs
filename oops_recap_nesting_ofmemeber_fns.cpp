#include<bits/stdc++.h>
using namespace std;

class binary
{
	string s;
public:
	void read();
	void chk_bin();
};

void binary::read()
{
	cout<<"Enter a binary number";
	cin>>s;
	//chk_bin();
}

void binary:: chk_bin()
{
	for (int i = 0; i < s.length(); ++i)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{

			cout<<"Incorrect binary format";
			exit(0);
		}
	}
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout<<"It is binary";
	return 0;
}