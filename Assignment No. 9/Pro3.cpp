/* Q3.Scan 2 strings from user.Check which one will go first in dictionary.
Write whole code in main() only.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[90];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(arr,90);
	
	int res;
	
	res = strcmp(str,arr);
	
	if(res == 1)
	{
		cout<<str<<">"<<arr;
	}
	else if(res == -1)
	{
		cout<<str<<"<"<<arr;
	}
	else
	{
		cout<<str<<" = "<<arr;
	}
	
}
