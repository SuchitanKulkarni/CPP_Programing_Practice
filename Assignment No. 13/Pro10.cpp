/*
Q4.
Using inbuilt string data type,scan 2 strings from user.Compare them to check if they
are equal or not.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a,b;
	
	cout<<"Enter the string 1 : "<<endl;
	getline(cin,a);
	
	cout<<"Enter the string 2 : "<<endl;
	getline(cin,b);
	
	if(a==b)
	{
		cout<<"both are equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
	return 0;
}
