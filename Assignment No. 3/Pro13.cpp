/* 13.WAP to check working of setw() and endl. */

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a=10;
	int b=1000;
	int c=40000;
	
	cout<<"setw = "<<setw(10)<<a<<endl;
	cout<<"setw = "<<setw(10)<<b<<endl;
	cout<<"setw = "<<setw(10)<<c<<endl;
	
	return 0;
}
