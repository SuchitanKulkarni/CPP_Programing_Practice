/*
6.
WAP to understand working of atoi() and atof().
atof() will convert string fraction value into float fraction value.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char str1[90];
	char str2[89];
	
	cout<<"Enter the string 1 :  "<<endl;
	cin.getline(str1,89);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(str2,57);
	
	int x, y;
	
	x = atoi(str1);
	y = atoi(str2);
	
	float a,b;
	
	a = atof(str1);
	b = atof(str2);
	
	cout<<" x = "<<x<<" y = "<<y<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
	
	return 0;
	
}
