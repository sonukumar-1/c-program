#include<iostream>
int main()
{
	struct book
	{
		int bookid;
		char bookname;
		float price;
		
	}
	struct book b1;
	cout<<"enter bookid,bookname,price";
	cin>>b1.bookid>>b1.bookname>>b1.price;
	cout<<"book id"<<b1.bookid;
	cout<<"book name"<<b1.bookname;
	cout<<"book price"<<b1.price;
	return 0;
}
