/*
8.Scan 3 strings from user.Find the string which will go first in dictionary.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[90];
	char arr[90];
	char temp[78];
	
	cout<<"Enter the string 1 : "<<endl;
	cin.getline(str,89);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(arr,78);
	
	cout<<"Enter the string 3 : "<<endl;
	cin.getline(temp,56);
	
	int res;
	
	res = strcmp(str,arr);
	
	if(res == 1)
	{
		res = strcmp(arr,temp);
		
		if(res == 1)
		{
			cout<<temp<<" will go first "<<endl;
		}
		else
		{
			cout<<arr<<" will go first"<<endl;
		}
	}
	else if(res == -1)
	{
		res = strcmp(str,temp);
		
		if(res == 1)
		{
			cout<<temp<<" will go first "<<endl;
		}
		else
		{
			cout<<str<<" will go first"<<endl;
		}
	}
	else
	{
		res = strcmp(str,temp);
		
		if(res == 1)
		{
			cout<<temp<<" will go first "<<endl;
		}
		else
		{
			cout<<str<<"&"<<arr<<" will go first"<<endl;
		}
	}
	
	return 0;
}
