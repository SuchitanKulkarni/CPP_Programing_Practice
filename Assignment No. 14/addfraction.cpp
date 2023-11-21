/*
8.
Create a command 'addFraction' which will add 3 fraction values.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 4)
	{
		cout<<"\nEnter 3 fraction value"<<endl;
		exit(1);
	}
	
	float a,b,c;
	
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);
	
	cout<<"\n\naddition = "<<a+b+c;
	
	return 0;
	
}
