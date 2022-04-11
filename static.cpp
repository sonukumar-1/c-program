#include<iostream>
class Account
{
	public:
		int balance;
		static float roi;
	public:
		void setbalance(int b)
		{
			balance=b;
		};
};
float Account:: roi;
void main()
{
	Account a1;
	Account :: roi(3.5);
 } 
