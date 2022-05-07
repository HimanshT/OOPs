#include<bits/stdc++.h>
using namespace std;

class Bankdeposit{
	float principal;
	float year;
	float rate;
	float returnValue;
public:
	Bankdeposit(){};//(blank constructor)you need this for bd3,that has no values
	Bankdeposit(float p,float y,float r);
	Bankdeposit(float p,float y,int r);
	void show();
};

Bankdeposit::Bankdeposit(float p,float y,float r)
{
	principal=p;
	year=y;
	rate=r;
	returnValue=principal + (p*r*y);
}

Bankdeposit::Bankdeposit(float p,float y,int r)
{
	principal=p;
	year=y;
	rate=(float)r/100;
	returnValue=principal + (principal*year*rate);
}

void Bankdeposit::show()
{
	cout<<principal<<" "<<returnValue<<endl;
}

int main()
{
    Bankdeposit bd1,bd2,bd3;
    float p,y,r;
    int R;
    cout<<"Enter something"<<endl;
    cin>>p>>y>>R;
    bd1=Bankdeposit(p,y,R);
    bd1.show();
	return 0;
}