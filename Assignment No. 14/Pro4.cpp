/*
4.
Scan 3 strings from user.Find which one will go first in dictionary.
(Use character array string)
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[90];
	char str2[80];
	char str3[80];
	
	cout<<"Enter the string 1 : "<<endl;
	cin.getline(str1,67);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(str2,67);
	
	cout<<"Enter the string 3 : "<<endl;
	cin.getline(str3,67);
	
	if(strcmp(str1,str2)==1)
	{
		if(strcmp(str2,str3)==1)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(strcmp(str2,str3)==0)
		{
			cout<<str2<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str2<<" will go first in dictionary"<<endl;
		}
	}
	else if(strcmp(str1,str2)==-1)
	{
		if(strcmp(str1,str3)== 1)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(strcmp(str1,str3)== 0 )
		{
			cout<<str1<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str1<<" will go first in dictionary"<<endl;
		}
	}
	else if(strcmp(str1,str2) == 0)
	{
		if(strcmp(str1,str3)==1)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(strcmp(str1,str3) == 0)
		{
			cout<<str1<<str2<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str1<<str2<<" will go first in dictionary"<<endl;
		}
	}
	
	return 0;
}
