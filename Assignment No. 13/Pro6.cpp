/*
Q1.
int main()
{
	char *p,*q;
}
Scan 2 strings from user here and find their length.
Compare them and check if the are equal or not.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{                                                                              
	char *p,*q;
	
	p = new char(30);
	
	q = new char (60);
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(p,30);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(q,60);
	
	cout<<"lenght 1 = "<<strlen(p)<<endl;
	cout<<"length 2  = "<<strlen(q)<<endl;
	
	if(strcmp(p,q)==1)
	{
		cout<<"Both are equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
	return 0;
}

