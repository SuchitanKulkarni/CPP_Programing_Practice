/*
Q10.
class String
{
	public:
		char str[30];
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}	
*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str[30];
		
		void getString()
		{
			cout<<"Enter the string : "<<endl;
			cin.getline(str,30);
		}
		
		int operator == (String p)
		{
			int res = strcmp(str,&p.str[0]);
			
			if(res == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
	
	return 0;
}	
