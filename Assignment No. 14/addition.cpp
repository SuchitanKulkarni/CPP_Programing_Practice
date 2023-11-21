/*
9.
Create a command 'addition' which will add any number of integers.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char * argv[])
{
	int * p;
	int sum = 0;
	
	p = new int[argc-1];
	
	for(int i=0;i<argc-1;i++)
	{
		*(p+i) = atoi(argv[i]);
		 sum = sum + *(p+i);
	}
	
	cout<<" \n\nAddition = "<<sum<<endl;
	
	return 0;
	
	
}
