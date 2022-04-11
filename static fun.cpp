#include<iostream>
using namespace std;
class Note
{
	static int num;
	static int b;
	public:
		static int fun()
		{
			return num+b;
		}
};
int Note::num=5;
int Note::b=6;
int main()
{
	cout<<"The value of the num is"<<Note::fun()<<endl;
	return 0;
}
