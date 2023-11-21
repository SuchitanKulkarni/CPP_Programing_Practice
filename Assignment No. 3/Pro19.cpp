/*19.Scan 2 integers from user.Find their GCD. */

#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter 2 integers :"<<endl;
	cin>>num1>>num2;
	
	int i=1,gcd;
	while(i<=num1 && i<=num2)
	{
		if(num1%i ==0 && num2%i ==0)
		{
			gcd = i;
		
		}
	}
	cout<<"GCD = "<<gcd;
	return 0;
}
 
