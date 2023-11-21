/*
2.
Create a command 'findlength' which will find the length of only one string.
If user gives more than one strings,program should terminate with error message.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char * argv[])
{
	if(argc != 2)
	{
		cout<<"\nwrong input(enter only one input)"<<endl;
		exit(1);
	}
	
	cout<<" Length of string  =  "<<strlen(argv[1]);
	
	return 0;
}
