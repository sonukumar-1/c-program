#include<iostream>
using namespace std;
class Add
{ 

	static int a;
	static int b;

		void add(int x,int y)
		{
			x=a;
			y=b;
			
		}
		void display()
		{
			cout<<x+y;
		}
		
};
int Add::a;
int Add::b;
int main()
{
	Add a1;
	a1.add(2,3);
	a1.display();
    return 0;
	
}
