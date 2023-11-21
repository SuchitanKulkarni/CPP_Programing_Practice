/* 1.Scan 3 integers from user.Find the largest integer using conditional operator.*/

#include<iostream>
using namespace std;

int main()
{
	
	int num1, num2,num3;
	int i,max;
	cout<<"Enter the 3 integers";
    cin>>num1>>num2>>num3;
    
    if(num1>num2)
    {
    	max=num1;
	}
	else
	{
		max = num2;
	}
	
	int largest = max>num3 ? max : num3;
	
	cout<<"\n Largest Number = "<<largest; 
	
	return 0;
	

}
