/*
Q6.
Scan 2 integers from user.Print their addition.
Then ask user if he wants to perform addition of 2 more integers.
Repeat the process if he wants to.Else stop the program.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	while(1)
	{
		cout<<"enter the 2 integer : "<<endl;
		cin>>a>>b;
		
		cout<<"Addition  = "<<a+b<<endl<<endl;
		int n;
		cout<<"you want to continue : (enter 1 if yes or 0 if no) : "<<endl;
		cin>>n;
		
		if(n==0)
		{
			break;
		}
	}
	
	return 0;
}
