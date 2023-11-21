/* Q21.Scan a character from user.Define function check() to check if given character is alphabet or not. */

#include<iostream>
using namespace std;
void check(char a);
int main()
{
	char ch;
	cout<<"Enter the character : "<<endl;
	cin>>ch;
	
	check(ch);
	
	return 0;
}
void check(char a)
{
	if(a>='a' && a<='z' || a>='A' && a<='Z')
	{
		cout<<"Input is alphabet";
	}
	else
	{
		cout<<"Input is not an alphabet";
	}
}

