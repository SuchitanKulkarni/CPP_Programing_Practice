/* 9.Scan a character from user.Define function check() to check if it is uppercase alphabet,lowercase alphabet or 
a digit. */

#include<iostream>
using namespace std;
void check(char y);
int main()
{
	char ch;
	cout<<"Enter the character : "<<endl;
	cin>>ch;
	
	check(ch);
	
	
	return 0;
}

void check(char y)
{
	if(y>='a' && y<='z')
	{
		cout<<"Is lowercase alphabet ";
	}
	else if(y>='A' && y<='Z')
	{
		cout<<"Is uppercase alphabet ";
	}
	else if(y<='0' && y<='9')
	{
		cout<<"Is Digit ";
	}
	else
	{
		cout<<"symbols ";
	}
}
