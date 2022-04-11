#include<iostream>
using namespace std;
struct student
{

	int s_id;
	float account_balance;
	void display()
	{
		cout<<"enter s_id and account balance";
	cin>>s_id>>account_balance;
	if(s_id>100)
	{
	float s=s_id+account_balance;
	cout<<s;
	}
}
}b1;
int main()
{
	b1.display();
	return 0;
}
