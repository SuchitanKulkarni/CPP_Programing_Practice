/* Q25.Scan necessary details from candidate to check if he/she can marry or not.
USE SWITCH CASE	*/

#include<iostream>
using namespace std;

int main()
{
	int age;
	char gen;
	
	cout<<"Enter the Gender(M Or F) : "<<endl;
	cin>>gen;
	cout<<"Press \n1. Age Between 1 - 17 \n2. Age Above 18 "<<endl;
	cout<<"Choice your Age "<<endl;
	cin>>age;
	
	switch(age)
	{
		case 1 : cout<<"Not Eligible for Marry";
				 break;
				 
		case 2 : cout<<"Eligible for Marry ";
				break;
				
		default : cout<<"Wrong Input";
	}
	
	return 0;
	
	
	
}
