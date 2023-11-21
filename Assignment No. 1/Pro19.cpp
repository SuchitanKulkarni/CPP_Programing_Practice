/* 19.Scan a character from user.Check if that character is uppercase or lowercase alphabet.*/

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character "<<endl;
	cin>>ch;
	
	if(ch>='a' && ch<='z')
	{
		cout<<"Character is lowercase"<<endl;
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<"Character is uppercase"<<endl;
	}
	else
	{
		cout<<"Wrong input"<<endl;
	}
	
	return 0;
}
