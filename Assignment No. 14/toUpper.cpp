/*
5.
Create a command 'toUpper' which will convert given string in uppercase format.
Only one string should be allowed as input.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char* argv[])
{
	if(argc != 2)
	{
		cout<<"\nEnter a string "<<endl;
		exit(1);
	}
	char ch[90];
	
	strcpy(&ch[0],argv[1]);
	
	int i = 0;
	
	while(ch[i] != '\0')
	{
	
		if(ch[i] >=97 && ch[i] <=122)
		{
			ch[i]= ch[i] - 32;
			
		}
		
		i++;
	}
	
	cout<<" string = "<<ch;
	
	return 0;
}
