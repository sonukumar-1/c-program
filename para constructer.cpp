#include<iostream>
using namespace std;
class Add
{
	private:
		int a,b;
	public:
	Add(int x,int y)
	{
		a=x;
		b=y;
		cout<<"the sum of a and b is"<<a+b;
	}
	Add(int c)
	   
	
	{
		cout<<"the substarction of a and b is"<<c-a;
	}
};
int main()
{
	Add a(3,4),a2(3);

	
}
