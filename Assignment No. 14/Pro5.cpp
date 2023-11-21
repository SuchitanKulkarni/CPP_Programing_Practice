 /*
 5.
Repeat Que 4 using inbuilt string datatype.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str1;
	string str2;
	string str3;
	
	cout<<"Enter the strnig 1 : "<<endl;
	getline(cin,str1);
	
	cout<<"Enter the string 2 : "<<endl;
	getline(cin,str2);
	
	cout<<"Enter the string 3 : "<<endl;
	getline(cin,str3);
	
	if(str1 > str2)
	{
		if(str2 > str3)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(str2 == str3)
		{
			cout<<str2<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str2<<" will go first in dictionary"<<endl;
		}
	}
	else if(str1 < str2)
	{
		if(str1 > str3)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(str1 == str3)
		{
			cout<<str1<<" "<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str1<<" will go first in dictionary"<<endl;
		}
	}
	else if(str1 == str2 )
	{
		if(str1 > str3)
		{
			cout<<str3<<" will go first in dictionary"<<endl;
		}
		else if(str1 == str3)
		{
			cout<<str1<<" "<<str2<<" "<<str3<<" will go first in dictionary"<<endl;
		}
		else
		{
			cout<<str1<<str2<<" will go first in dictionary"<<endl;
		}
	}
	
	return 0;
}
