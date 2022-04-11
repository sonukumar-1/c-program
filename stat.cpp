#include<iostream>
using namespace std;
class Add
{
	public:
	static int a;
    static int b; 
};
int main()
{
  int Add::a=6;
  int Add::b=10;
  cout<<Add::a;
  return 0;
  
};
