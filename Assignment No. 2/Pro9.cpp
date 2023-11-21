/* Q9.Keep scanning a character from user until usr enters '?'.Count only alphabets(capital or small) user has entered. */

#include<iostream>
using namespace std;

int main()
{
	char ch;
	int count;
	while(1)
	{
		cout<<"Enter the character : "<<endl;
		cin>>ch;
		
		if(ch=='?')
		{
			break;
		}
		if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
			count++;
		}
		
	}
	
	cout<<"Alphabets  = "<<count;
}

