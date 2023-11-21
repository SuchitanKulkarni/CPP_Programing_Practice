/* Q14.Scan 2 integers from user in main().Define function addition() to find their addition.
Print result in addition() function only. */

#include<iostream>
using namespace std;
void addition(int a,int b);
int main()
{
	int num1,num2;
	cout<<"Enter 2 integers : "<<endl;
	cin>>num1>>num2;
	
	addition(num1,num2);
	
	return 0;
}

void addition(int a,int b)
{
	cout<<"ADDITION = "<<a+b;
}
