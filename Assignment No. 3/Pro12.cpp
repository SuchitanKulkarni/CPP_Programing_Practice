/* 12.WAP to test functions returning references concept. */

#include<iostream>
using namespace std;
int& myfun(int &y);
int main()
{
	int x=10;
	cout<<"x = "<<x<<endl;
	myfun(x)=5;
	
	cout<<"x = "<<x;
	
	return 0;
}
int& myfun(int &y)
{
	return y;
}
