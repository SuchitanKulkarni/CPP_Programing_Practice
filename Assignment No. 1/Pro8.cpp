/* 8.Scan gender and age of candidate from user.Check if he/she is able to marry or not.*/

#include<iostream>
using namespace std;

int main ()
{
	char gen;
	int age;
	
	cout<<"Enter the Gender(f/m)";
	cin>>gen;
	cout<<"\nEnter the Age";
	cin>>age;
	
	if(age>=18)
	{
		cout<<gen<<" is Able to Marry";
	}
	else
	{
		cout<<gen<<" is not Able to Marry";
	}
	
	return 0;
	
	
}

