#include<iostream>
using namespace std;


int main()
{
    // int *p=new int(40);
    float *p=new float(60);
    cout<<"The value of p is "<<*(p)<<endl;

    //array
    int *arr=new int[2];
    arr[0]=1;
    *(arr+1)=3;
    // delete[] arr;
    cout<<arr[1]<<" "<<arr[0];
	return 0;
}