#include<iostream>
using namespace std;
class Car
{
	private:
	 static int a;
	int b;
	public:
	Car()
	{
	 int Car::a=5;
		cout<<"enter teh value of a and b";
		
		cin>>a;
		cin>>b;
		int s=a+b;
		cout<<"the sum of a and b is"<<" "<<s;
	};
};
int main()
{
	Car c1;
	return 0;
}
