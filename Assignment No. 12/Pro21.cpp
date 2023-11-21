/*
5.
Scan 3 strings from user.Use inbuilt string datatype.
Compare those strings and check which one will go first in dictionary.
*/

#include<iostream>
using namespace std;

int main()
{
	string str,arr,tem;
	
	cout<<"Enter the string 1 : "<<endl;
	getline(cin,str);
	
	cout<<"Enter the string 2 : "<<endl;
	getline(cin,arr);
	
	cout<<"Enter the string 3 : "<<endl;
	getline(cin,tem);
	
	if(str >  arr)
	{
		if(tem > arr)
		{
			cout<<arr<<" will go first in dictionary "<<endl;
		}
		else
		{
			cout<<tem<<" will go first in dictionary "<<endl;
		}
	}
	else if(str < arr)
	{
		if(str < tem)
		{
			cout<<str<<" will go first in dictionary "<<endl;
		}
		else
		{
			cout<<tem<<" will go first in dictionary "<<endl;
		}
	}
	else if(str == arr)
	{
		if(arr < tem)
		{
			cout<<arr<<str<<" both will go first in dictionary "<<endl;
		}
		else
		{
			cout<<tem<<" will go first in dictionary "<<endl;
		}
	}
	
	return 0;
}
