#include<iostream>
#include<fstream>
#include<string>

using namespace std;
/*

The useful classes for working with files are
1. fstreambase
2. ifstream-->derived from fstreambase
3. ofstream-->"

*/

int main()
{
	string st = "this is a test file";
	//opening file using constructor and writing in it
	// ofstream out("sample1.txt");
	// out << st;
	//out.close() -->it is not necc. to use out you can use any name of your choice

	//opening file and reading it
	string str;
	ifstream in("sample1.txt");
	//in >> str;
	getline(in, str);//it will run 1st line
	getline(in, str);//but these two(28-27) will combine to run 2nd line
	//it will read only a line
	// getline(in, str);
	cout << str;
	in.close();
	return 0;
}