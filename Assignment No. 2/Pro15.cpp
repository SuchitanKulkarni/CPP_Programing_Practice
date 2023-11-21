/* Q15.Scan 2 integers from user in main()Define functions multi() and sub() to find thier 
multiplication and subtraction.Print results in function only. */

#include<iostream>
using namespace std;
void multi(int a,int b);
void sub(int a,int b);
int main()
{
	int num1,num2;
	cout<<"Enter the 2 integers : "<<endl;
	cin>>num1>>num2;
	multi(num1,num2);
	sub(num1,num2);
	
	return 0;
	
}
void multi(int a,int b)
{
	cout<<"MULTIPLICATION = "<<a*b;
}
void sub(int a,int b)
{
	cout<<"\nSUBTRACTION = "<<a-b;
}
