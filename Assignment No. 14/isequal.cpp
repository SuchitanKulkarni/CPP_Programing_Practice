/*
6.
Create a command 'isequal' which will compare 2 strings to check if they are equal or not.
Only 2 strings must be allowed as input.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char * argv[])
{
    if(argc != 3)
	{
		cout<<"\nEnter the 2 strings"<<endl;
		exit(1);
	}	
	
	int res = strcmp(argv[1],argv[2]);
	
	if(res == 0)
	{
		cout<<"Are equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
	return 0;
}
