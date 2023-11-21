/* 10.Scan a character from user.Define function change() to change this character to uppercase it it is in lowercase.
Function returntype should be void. */

#include<iostream>
using namespace std;
void change(char &y);
int main()
{
	char ch;
	cout<<"Enter a character : "<<endl;
	cin>>ch;
	
	change(ch);
	
	cout<<ch;
	
	return 0;
	
}
void change(char &y)
{
	if(y>='A' && y<='Z')
	{
		y = y+32;
	}
}
