/* 4.Scan 10 integers from user and print their addition. use loop here.*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	int i,sum=0;
	cout<<"Enter 10 integers ";
	for(i=0;i<10;i++)
	{
		cin>>num;
		
		sum=sum+num;
		
	}
	
	cout<<"\nAddition = "<<sum;
	return 0;
}

