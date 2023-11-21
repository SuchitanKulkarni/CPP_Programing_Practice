/*
7.
Create a command 'add' which will add only 2 integers.
Only 2 integers must be allowed as input.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		cout<<"\n Enter two integers "<<endl;
		exit(1);
	}
	
	int x,y;
	
	x = atoi(argv[1]);
	
	y = atoi(argv[2]);
	
	cout<<" Addition = "<<x+y;
	
	return 0;
}
