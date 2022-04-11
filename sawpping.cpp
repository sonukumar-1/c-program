#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	cout<<"the value of a"<<a<<endl;
	cout<<"the value of b"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping tha value of a"<<a<<endl;

	cout<<"after swapping tha value of b"<<b;
		return 0;
}
