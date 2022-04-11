#include<iostream>
using namespace std;
int main()
{
	int a;
	long double rem = 1.0;
	cout<<"enter value";
	cin>>a;
	for(int i=1;i<=a;++i)
	{
		rem*=i;
			
	}
	cout<<rem;
	

	return 0;
}
