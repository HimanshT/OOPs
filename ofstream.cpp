#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	// ofstream out;
	// out.open("sample1.txt");
	// out << "MY name is himanshu ";
	// out << "Tripathi ";
	// out.close();

	ifstream in;
	string str1, str2;
	in.open("sample1.txt");
	// in >> str1 >> str2;
	// cout << str1 << str2;
	while (in.eof() == 0)
	{
		getline(in, str1);
		cout << str1 << endl;
	}
	in.close();
	return 0;
}