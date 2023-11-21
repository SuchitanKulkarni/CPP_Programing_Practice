/* Q17.Scan 2 integers from user in main()Define functions multi() and sub() to find thier 
multiplication and subtraction.Print results back in main().(functions returning values) */

#include<iostream>
using namespace std;
int multi(int a,int b);
int sub(int a,int b);

int main()
{
	int num1,num2;
	cout<<"Enter 2 integers : "<<endl;
	cin>>num1>>num2;
	
	cout<<"MULTIPLICATION  = "<<multi(num1,num2)<<endl;
	cout<<"SUBTRACTION = "<<sub(num1,num2)<<endl;
	
	return 0;
	
}
int multi(int a,int b)
{
	return(a*b);
}
int sub(int a,int b)
{
	return(a-b);
}

