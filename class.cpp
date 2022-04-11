#include<iostream>
using namespace std;
class name{
	public://public member
		void getdata()
		{
			int a,b,s;
			cout<<"enter two number";
		    cin>>a>>b;
		    s=a+b;
		    cout<<"the sum of a and b is"<<s<<endl;
		};
	    private://private member
		void putdata()
		{
			int x,y,z;
			cout<<"enter second two number";
			cin>>x>>y;
			z=x-y;
			cout<<"the subtraction of two number is"<<z;
		};
		 protected://protected member 
		void display()
		{
			int n,n2,n3;
			cout<<"enter second two number";
			cin>>n>>n2;
			n3=n*n2;
			cout<<"the multiplication of two number is"<<n3;
		};
}n1;
int main()
{
	n1.getdata();
	n1.putdata();
	n3.display();
	return 0;
}
