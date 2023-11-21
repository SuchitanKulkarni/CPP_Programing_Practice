/*
10.
Create a command 'exponent' which will find base raised to power.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char * argv[])
{
	if(argc != 3)
	{
		cout<<"Enter the base and power"<<endl;
		exit(1);
	}
	
	int a,b;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	int i,sum =1;
	
	for(i=1;i<=b;i++)
	{
		sum = sum*a;
	}
	cout<<"\nExponent = "<< sum;
	
	return 0;
}
