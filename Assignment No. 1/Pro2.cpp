/*2.Scan 2 integers from user.Compare them using if else.
(Compare means find which one is smaller and greater or check if they are equal) */

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter 2 integers ";
	cin>>num1>>num2;
	int Greater;
    int smaller;

	if(num1>num2)
	{
		 Greater = num1;
		 smaller = num2;
		
	}
	else if(num1==num2)
	{
		cout<<"\nBoth are equal";
	}
	else
	{
		Greater = num2;
		smaller = num1;
	}
	
	cout<<"Greater ="<<Greater<<" "<<"Smaller = "<<smaller;
	
	return 0;
}

