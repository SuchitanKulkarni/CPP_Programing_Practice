/* 8.Scan 2 integers from user.Find their LCM. */

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter 2 integers : "<<endl;
	cin>>num1>>num2;
	
	int num3;
	
	if(num1>num2)
	{
		num3 = num1;
	}
	else
	{
		num3 = num2;
	}
	
	
	
		if(num3%num1 ==0 && num3%num2 ==0)
		{
			cout<<"Lcm = "<<num3;
		}
	
	return 0;
}
