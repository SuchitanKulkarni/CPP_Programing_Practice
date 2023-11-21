/* 14.WAP to explain static concept.(Perform some experiments on your own and get familiar with static) */

#include<iostream>
using namespace std;
void myfun();
int main()
{
	myfun();
	myfun();
	myfun();
}
void myfun()
{
	static int x = 4;
	x++;
	cout<<x<<endl;
}

