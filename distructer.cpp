#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		~Complex()//distructer(~)
		{
			cout<<"i am sonu";
		}
};
void fun()
{
	Complex c1;
	
}
int main()
{
	fun();
	return 0;
}
