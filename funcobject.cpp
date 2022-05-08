#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	//function objects:function wrapped in a class
	//so that it is available as an object
	int arr[] = {1, 2, 3, 4, 5, 0};
	int n = 5;
	sort(arr, arr + n); //ascending
	sort(arr, arr + n, greater<int>()); //descending
	return 0;
}