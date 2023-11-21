/* Q9.Write a program to check how strcpy() and strlen() work. */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[10];
	int len;
	cout<<"Enter the string :"<<endl;
	cin.getline(str,10);
	
	len = strlen(str);
	cout<<len<<endl;
	char str2[10];
	
	strcpy(str2,str);
	
	cout<<str2;
	return 0;
}
