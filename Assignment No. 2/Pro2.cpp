/* Q2.Scan a character from user.Check if it is capital alphabet or small alphabet. */

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"\nIt is an capital alphabet";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"\nIt is an small alphabet";
	}
	else
	{
		cout<<"\nWrong Input";
	}
	
	return 0;
	
	
}

