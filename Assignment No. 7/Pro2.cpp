/* 2.WAP to explain default arguments.*/

#include<iostream>
using namespace std;

void myfun(int a ,int b = 2,int c = 9);

int main()
{
	myfun(1 ,3, 4);
	myfun(2,3,4);
	myfun(6);
	myfun(2,3);
	
	return 0;
	
}
void myfun(int a, int b,int c)
{
	cout<<"  a = "<<a<<"  b = "<<b<<"  c = "<<c<<endl;
}
