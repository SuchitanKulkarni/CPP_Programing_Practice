/*
3.
Create a command 'stringlength' which will find length of all the strings given
as commandline arguments.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char * argv[])
{
	if(argc == 1)
	{
		cout<<"\nNot entered input"<<endl;
		exit(1);
	}
	
	int i;
	
	for(i=1;i<argc;i++)
	{
		cout<<"length = "<<strlen(argv[i])<<endl;
	}
	
	return 0;
}

