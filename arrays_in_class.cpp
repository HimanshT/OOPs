#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class shop{  //by default everything is private
	int itemId[100];
	int itemPrice[100];
	int counter;
public:
	void initCounter(){counter=0;};
	void getPrice();
	void showPrice();
};

void shop::getPrice()
{
	cout<<"Enter Id of your item"<<endl;;
	cin>>itemId[counter];
	cout<<"Enter the itemPrice"<<endl;
	cin>>itemPrice[counter];
	counter++;
}

void shop::showPrice()
{
	for(int i=0;i<counter;i++)
		cout<<"ItemId "<<itemId[i]<<" itemPrice "<<itemPrice[i]<<endl;
}

int main()
{
    shop s1;
    s1.initCounter();
    for(int i=1;i<=5;i++)
    	s1.getPrice();
    s1.showPrice();
	return 0;
}