#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=1,nextterm=0;
	cout<<"enter the number of terms";
	cin>>n;
	cout<<"fibonacci series";
	for(int i=1;i<=n;++i)
	{
		
		if(i==1){
			cout<<t1<<", ";
			continue;
		}
		if(i==2)
		{
			cout<<t2<<",";
		}
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
		cout<<nextterm<<", ";
	}
	return 0;
	
}
