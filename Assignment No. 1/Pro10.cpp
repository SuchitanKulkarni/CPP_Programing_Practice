/* 10.WAP to check working of setw() and endl.*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter the 3 integers"<<endl;
	cin>>num1>>num2>>num3;
	
	cout<<"num1 = "<<setw(10)<<num1<<endl;
	cout<<"num2 = "<<setw(10)<<num2<<endl;
	cout<<"num3 = "<<setw(10)<<num3<<endl;
	
	return 0;
}
